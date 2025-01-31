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

#pragma once
#include "motion_43.hpp"

struct RETrackCurve65 : RETrackCurve43 {
  RETrackController::Ptr GetController();
  // operator RETrackCurve43() = delete;
};

struct REMotionTrack65 {
  int16 unk;
  es::Flags<REMotionTrack43::TrackType> usedCurves;
  uint32 boneHash;
  float weight;
  esPointerX64<RETrackCurve65> curves;

  void Fixup(char *masterBuffer);
};

using REMotion65 = REMotion_t<REMotionTrack65>;

class REMotion65Asset final : public REMotion43Asset {
public:
  explicit REMotion65Asset(REAssetBase *base) { Assign(base); }
  REMotion65Asset() = default;
  REMotion65 &Get() { return REAssetBase::Get<REMotion65>(this->buffer); }
  const REMotion65 &Get() const {
    return REAssetBase::Get<const REMotion65>(this->buffer);
  }

  std::string Name() const override {
    return es::ToUTF8(Get().animationName.operator->());
  }
  uint32 FrameRate() const override { return Get().framesPerSecond; }
  float Duration() const override { return Get().intervals[0] / FrameRate(); }

  void Fixup() override;
  void Build() override;

public:
  static constexpr uint64 ID = CompileFourCC("mot ");
  static constexpr uint64 VERSION = 65;
};
