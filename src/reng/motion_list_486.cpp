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

//This file updated by alphaZomega in 2022 for support of motlist.528, motlist.524, and motlist.484

#include "motion_list_486.hpp"

void REMotlist653::Fixup() {
	char *masterBuffer = reinterpret_cast<char *>(this);

	motions.Fixup(masterBuffer);
	unkOffset00.Fixup(masterBuffer);
	fileName.Fixup(masterBuffer);
	null.Fixup(masterBuffer);

	for (uint32 m = 0; m < numMotions; m++) {
		motions[m].Fixup(masterBuffer);

		REAssetBase *cMotBase = motions[m];

		if (!cMotBase || (cMotBase->assetID != REMotion603Asset::VERSION) ||
			cMotBase->assetFourCC != REMotion603Asset::ID) {
			continue;
		}

		REMotion603 *cMot = static_cast<REMotion603 *>(cMotBase);
		cMot->Fixup();

		char *localBuffer = reinterpret_cast<char *>(cMot);

		if (cMot->pad || !cMot->bones) {
			continue;
		}

		cMot->bones.Fixup(localBuffer);
		cMot->bones->ptr.Fixup(localBuffer);
		REMotionBone *bonesPtr = cMot->bones->ptr;

		if (!bonesPtr) {
			continue;
		}

		for (size_t b = 0; b < cMot->numBones; b++) {
			bonesPtr[b].Fixup(localBuffer);
		}
	}
}

void REMotlist653Asset::Build() {
	REMotlist653 &data = Get();
	const size_t numAnims = data.numMotions;

	auto &motionListStorage = static_cast<MotionList653 &>(*this).storage;
	auto &skeletonStorage = static_cast<SkeletonList &>(*this).storage;

	for (size_t m = 0; m < numAnims; m++) {
		auto cMot = data.motions[m];

		if (!cMot || (cMot->assetID != REMotion603Asset::VERSION) ||
			cMot->assetFourCC != REMotion603Asset::ID) {
			continue;
		}

		motionListStorage.emplace_back();
		motionListStorage.back().Assign(cMot);

		if (cMot->pad || !cMot->bones || !cMot->bones->ptr) {
			continue;
		}

		skeletonStorage.emplace_back();
		skeletonStorage.back().Assign(cMot->bones->ptr, cMot->numBones);
	}
}

void REMotlist653Asset::Fixup() {
	REMotlist653 &data = Get();
	data.Fixup();
	Build();
}

void REMotlist528::Fixup() {
	char *masterBuffer = reinterpret_cast<char *>(this);

	motions.Fixup(masterBuffer);
	unkOffset00.Fixup(masterBuffer);
	fileName.Fixup(masterBuffer);
	null.Fixup(masterBuffer);

	for (uint32 m = 0; m < numMotions; m++) {
		motions[m].Fixup(masterBuffer);

		REAssetBase *cMotBase = motions[m];

		if (!cMotBase || (cMotBase->assetID != REMotion495Asset::VERSION) ||
			cMotBase->assetFourCC != REMotion495Asset::ID) {
			continue;
		}

		REMotion495 *cMot = static_cast<REMotion495 *>(cMotBase);
		cMot->Fixup();

		char *localBuffer = reinterpret_cast<char *>(cMot);

		if (cMot->pad || !cMot->bones) {
			continue;
		}

		cMot->bones.Fixup(localBuffer);
		cMot->bones->ptr.Fixup(localBuffer);
		REMotionBone *bonesPtr = cMot->bones->ptr;

		if (!bonesPtr) {
			continue;
		}

		for (size_t b = 0; b < cMot->numBones; b++) {
			bonesPtr[b].Fixup(localBuffer);
		}
	}
}

void REMotlist528Asset::Build() {
	REMotlist528 &data = Get();
	const size_t numAnims = data.numMotions;

	auto &motionListStorage = static_cast<MotionList528 &>(*this).storage;
	auto &skeletonStorage = static_cast<SkeletonList &>(*this).storage;

	for (size_t m = 0; m < numAnims; m++) {
		auto cMot = data.motions[m];

		if (!cMot || (cMot->assetID != REMotion495Asset::VERSION) ||
			cMot->assetFourCC != REMotion495Asset::ID) {
			continue;
		}

		motionListStorage.emplace_back();
		motionListStorage.back().Assign(cMot);

		if (cMot->pad || !cMot->bones || !cMot->bones->ptr) {
			continue;
		}

		skeletonStorage.emplace_back();
		skeletonStorage.back().Assign(cMot->bones->ptr, cMot->numBones);
	}
}

void REMotlist528Asset::Fixup() {
	REMotlist528 &data = Get();
	data.Fixup();
	Build();
}


void REMotlist524::Fixup() {
	char *masterBuffer = reinterpret_cast<char *>(this);

	motions.Fixup(masterBuffer);
	unkOffset00.Fixup(masterBuffer);
	fileName.Fixup(masterBuffer);
	null.Fixup(masterBuffer);

	for (uint32 m = 0; m < numMotions; m++) {
		motions[m].Fixup(masterBuffer);

		REAssetBase *cMotBase = motions[m];

		if (!cMotBase || (cMotBase->assetID != REMotion492Asset::VERSION) ||
			cMotBase->assetFourCC != REMotion492Asset::ID) {
			continue;
		}

		REMotion492 *cMot = static_cast<REMotion492 *>(cMotBase);
		cMot->Fixup();

		char *localBuffer = reinterpret_cast<char *>(cMot);

		if (cMot->pad || !cMot->bones) {
			continue;
		}

		cMot->bones.Fixup(localBuffer);
		cMot->bones->ptr.Fixup(localBuffer);
		REMotionBone *bonesPtr = cMot->bones->ptr;

		if (!bonesPtr) {
			continue;
		}

		for (size_t b = 0; b < cMot->numBones; b++) {
			bonesPtr[b].Fixup(localBuffer);
		}
	}
}

void REMotlist524Asset::Build() {
	REMotlist524 &data = Get();
	const size_t numAnims = data.numMotions;

	auto &motionListStorage = static_cast<MotionList524 &>(*this).storage;
	auto &skeletonStorage = static_cast<SkeletonList &>(*this).storage;

	for (size_t m = 0; m < numAnims; m++) {
		auto cMot = data.motions[m];

		if (!cMot || (cMot->assetID != REMotion492Asset::VERSION) ||
			cMot->assetFourCC != REMotion492Asset::ID) {
			continue;
		}

		motionListStorage.emplace_back();
		motionListStorage.back().Assign(cMot);

		if (cMot->pad || !cMot->bones || !cMot->bones->ptr) {
			continue;
		}

		skeletonStorage.emplace_back();
		skeletonStorage.back().Assign(cMot->bones->ptr, cMot->numBones);
	}
}

void REMotlist524Asset::Fixup() {
	REMotlist524 &data = Get();
	data.Fixup();
	Build();
}


void REMotlist486::Fixup() {
  char *masterBuffer = reinterpret_cast<char *>(this);

  motions.Fixup(masterBuffer);
  unkOffset00.Fixup(masterBuffer);
  fileName.Fixup(masterBuffer);
  null.Fixup(masterBuffer);

  for (uint32 m = 0; m < numMotions; m++) {
    motions[m].Fixup(masterBuffer);

    REAssetBase *cMotBase = motions[m];

	if (!cMotBase || (cMotBase->assetID != REMotion458Asset::VERSION) ||
        cMotBase->assetFourCC != REMotion458Asset::ID) {
      continue;
    }

    REMotion458 *cMot = static_cast<REMotion458 *>(cMotBase);
    cMot->Fixup();

    char *localBuffer = reinterpret_cast<char *>(cMot);

    if (cMot->pad || !cMot->bones) {
      continue;
    }

    cMot->bones.Fixup(localBuffer);
    cMot->bones->ptr.Fixup(localBuffer);
    REMotionBone *bonesPtr = cMot->bones->ptr;

    if (!bonesPtr) {
      continue;
    }

    for (size_t b = 0; b < cMot->numBones; b++) {
      bonesPtr[b].Fixup(localBuffer);
    }
  }
}

void REMotlist486Asset::Build() {
  REMotlist486 &data = Get();
  const size_t numAnims = data.numMotions;

  auto &motionListStorage = static_cast<MotionList486 &>(*this).storage;
  auto &skeletonStorage = static_cast<SkeletonList &>(*this).storage;

  for (size_t m = 0; m < numAnims; m++) {
    auto cMot = data.motions[m];

	if (!cMot || (cMot->assetID != REMotion458Asset::VERSION) ||
        cMot->assetFourCC != REMotion458Asset::ID) {
      continue;
    }

    motionListStorage.emplace_back();
    motionListStorage.back().Assign(cMot);

    if (cMot->pad || !cMot->bones || !cMot->bones->ptr) {
      continue;
    }

    skeletonStorage.emplace_back();
    skeletonStorage.back().Assign(cMot->bones->ptr, cMot->numBones);
  }
}

void REMotlist486Asset::Fixup() {
  REMotlist486 &data = Get();
  data.Fixup();
  Build();
}

void REMotlist484::Fixup() {
	char *masterBuffer = reinterpret_cast<char *>(this);

	motions.Fixup(masterBuffer);
	unkOffset00.Fixup(masterBuffer);
	fileName.Fixup(masterBuffer);
	null.Fixup(masterBuffer);

	for (uint32 m = 0; m < numMotions; m++) {
		motions[m].Fixup(masterBuffer);

		REAssetBase *cMotBase = motions[m];

		if (!cMotBase || (cMotBase->assetID != REMotion456Asset::VERSION) ||
			cMotBase->assetFourCC != REMotion456Asset::ID) {
			continue;
		}

		REMotion456 *cMot = static_cast<REMotion456 *>(cMotBase);
		cMot->Fixup();

		char *localBuffer = reinterpret_cast<char *>(cMot);

		if (cMot->pad || !cMot->bones) {
			continue;
		}

		cMot->bones.Fixup(localBuffer);
		cMot->bones->ptr.Fixup(localBuffer);
		REMotionBone *bonesPtr = cMot->bones->ptr;

		if (!bonesPtr) {
			continue;
		}

		for (size_t b = 0; b < cMot->numBones; b++) {
			bonesPtr[b].Fixup(localBuffer);
		}
	}
}

void REMotlist484Asset::Build() {
	REMotlist484 &data = Get();
	const size_t numAnims = data.numMotions;

	auto &motionListStorage = static_cast<MotionList484 &>(*this).storage;
	auto &skeletonStorage = static_cast<SkeletonList &>(*this).storage;

	for (size_t m = 0; m < numAnims; m++) {
		auto cMot = data.motions[m];

		if (!cMot || (cMot->assetID != REMotion456Asset::VERSION) ||
			cMot->assetFourCC != REMotion456Asset::ID) {
			continue;
		}

		motionListStorage.emplace_back();
		motionListStorage.back().Assign(cMot);

		if (cMot->pad || !cMot->bones || !cMot->bones->ptr) {
			continue;
		}

		skeletonStorage.emplace_back();
		skeletonStorage.back().Assign(cMot->bones->ptr, cMot->numBones);
	}
}

void REMotlist484Asset::Fixup() {
	REMotlist484 &data = Get();
	data.Fixup();
	Build();
}