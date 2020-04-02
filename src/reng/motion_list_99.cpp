/*  Revil Format Library
    Copyright(C) 2017-2020 Lukas Cone

    This program is free software : you can redistribute it and / or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.If not, see <https://www.gnu.org/licenses/>.
*/

#include "motion_list_99.hpp"

int REMotlist99::Fixup() {
  char *masterBuffer = reinterpret_cast<char *>(this);

  motions.Fixup(masterBuffer);
  unkOffset00.Fixup(masterBuffer);
  fileName.Fixup(masterBuffer);
  null.Fixup(masterBuffer);

  for (int m = 0; m < numMotions; m++) {
    motions[m].Fixup(masterBuffer);
    REMotion78 *cMot = reinterpret_cast<REMotion78 *>(motions[m].operator->());
    cMot->Fixup();

    if (!m) {
      char *localBuffer = reinterpret_cast<char *>(cMot);
      cMot->bones.Fixup(localBuffer);
      cMot->bones->ptr.Fixup(localBuffer);
      REMotionBone *bonesPtr = cMot->bones->ptr;

      for (size_t b = 0; b < cMot->numBones; b++) {
        bonesPtr[b].Fixup(localBuffer);
      }
    }
  }

  return 0;
}

void REMotlist99Asset::Build() {
  REMotlist99 &data = Get();
  const size_t numAnims = data.numMotions;

  auto &motionListStorage = static_cast<MotionList99 &>(*this).storage;

  for (size_t m = 0; m < numAnims; m++) {
    motionListStorage.emplace_back(
        std::unique_ptr<REMotion78Asset>(new REMotion78Asset()));
    std::prev(motionListStorage.end())->get()->Assign(data.motions[m]);
  }

  auto &skeletonStorage = static_cast<SkeletonList &>(*this).storage;
  auto &cMot = *data.motions[0];
  skeletonStorage.emplace_back(
      std::unique_ptr<RESkeletonWrap>(new RESkeletonWrap()));
  std::prev(skeletonStorage.end())
      ->get()
      ->Assign(cMot.bones->ptr, cMot.numBones);
}

int REMotlist99Asset::Fixup() {
  REMotlist99 &data = Get();
  int rtVal = data.Fixup();
  Build();

  return rtVal;
}