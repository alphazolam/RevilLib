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

#pragma once
#include "motion_458.hpp"
#include "motion_list_85.hpp"

class REMotlist653 : public REAssetBase {
public:
	uint64 pad;
	esPointerX64<esPointerX64<REMotion495>> motions;
	esPointerX64<char> unkOffset00;
	esPointerX64<char16_t> fileName;
	esPointerX64<char> null;
	uint32 numMotions;
	void Fixup();
};

typedef uni::VectorList<uni::Motion, REMotion495Asset> MotionList653;

class REMotlist653Asset : public REAssetImpl,
	public MotionList653,
	public SkeletonList {
	REMotlist653 &Get() { return REAssetBase::Get<REMotlist653>(this->buffer); }
	const REMotlist653 &Get() const {
		return REAssetBase::Get<const REMotlist653>(this->buffer);
	}

	uni::BaseElementConst AsSkeletons() const override {
		return { static_cast<const SkeletonList *>(this), false };
	}

	uni::BaseElementConst AsMotions() const override {
		return { static_cast<const MotionList653 *>(this), false };
	}

	void Fixup() override;
	void Build() override;

public:
	static constexpr uint64 ID = CompileFourCC("mlst");
	static constexpr uint64 VERSION = 653;
};

class REMotlist528 : public REAssetBase {
public:
	uint64 pad;
	esPointerX64<esPointerX64<REMotion495>> motions;
	esPointerX64<char> unkOffset00;
	esPointerX64<char16_t> fileName;
	esPointerX64<char> null;
	uint32 numMotions;
	void Fixup();
};

typedef uni::VectorList<uni::Motion, REMotion495Asset> MotionList528;

class REMotlist528Asset : public REAssetImpl,
	public MotionList528,
	public SkeletonList {
	REMotlist528 &Get() { return REAssetBase::Get<REMotlist528>(this->buffer); }
	const REMotlist528 &Get() const {
		return REAssetBase::Get<const REMotlist528>(this->buffer);
	}

	uni::BaseElementConst AsSkeletons() const override {
		return { static_cast<const SkeletonList *>(this), false };
	}

	uni::BaseElementConst AsMotions() const override {
		return { static_cast<const MotionList528 *>(this), false };
	}

	void Fixup() override;
	void Build() override;

public:
	static constexpr uint64 ID = CompileFourCC("mlst");
	static constexpr uint64 VERSION = 528;
};


class REMotlist524 : public REAssetBase {
public:
	uint64 pad;
	esPointerX64<esPointerX64<REMotion492>> motions;
	esPointerX64<char> unkOffset00;
	esPointerX64<char16_t> fileName;
	esPointerX64<char> null;
	uint32 numMotions;
	void Fixup();
};

typedef uni::VectorList<uni::Motion, REMotion492Asset> MotionList524;

class REMotlist524Asset : public REAssetImpl,
	public MotionList524,
	public SkeletonList {
	REMotlist524 &Get() { return REAssetBase::Get<REMotlist524>(this->buffer); }
	const REMotlist524 &Get() const {
		return REAssetBase::Get<const REMotlist524>(this->buffer);
	}

	uni::BaseElementConst AsSkeletons() const override {
		return { static_cast<const SkeletonList *>(this), false };
	}

	uni::BaseElementConst AsMotions() const override {
		return { static_cast<const MotionList524 *>(this), false };
	}

	void Fixup() override;
	void Build() override;

public:
	static constexpr uint64 ID = CompileFourCC("mlst");
	static constexpr uint64 VERSION = 524;
};


class REMotlist486 : public REAssetBase {
public:
  uint64 pad;
  esPointerX64<esPointerX64<REMotion458>> motions;
  esPointerX64<char> unkOffset00;
  esPointerX64<char16_t> fileName;
  esPointerX64<char> null;
  uint32 numMotions;
  void Fixup();
};

typedef uni::VectorList<uni::Motion, REMotion458Asset> MotionList486;

class REMotlist486Asset : public REAssetImpl,
                         public MotionList486,
                         public SkeletonList {
  REMotlist486 &Get() { return REAssetBase::Get<REMotlist486>(this->buffer); }
  const REMotlist486 &Get() const {
    return REAssetBase::Get<const REMotlist486>(this->buffer);
  }

  uni::BaseElementConst AsSkeletons() const override {
    return {static_cast<const SkeletonList *>(this), false};
  }

  uni::BaseElementConst AsMotions() const override {
    return {static_cast<const MotionList486 *>(this), false};
  }

  void Fixup() override;
  void Build() override;

public:
  static constexpr uint64 ID = CompileFourCC("mlst");
  static constexpr uint64 VERSION = 486;
};


class REMotlist484 : public REAssetBase {
public:
	uint64 pad;
	esPointerX64<esPointerX64<REMotion456>> motions;
	esPointerX64<char> unkOffset00;
	esPointerX64<char16_t> fileName;
	esPointerX64<char> null;
	uint32 numMotions;
	void Fixup();
};

typedef uni::VectorList<uni::Motion, REMotion456Asset> MotionList484;

class REMotlist484Asset : public REAssetImpl,
	public MotionList484,
	public SkeletonList {
	REMotlist484 &Get() { return REAssetBase::Get<REMotlist484>(this->buffer); }
	const REMotlist484 &Get() const {
		return REAssetBase::Get<const REMotlist484>(this->buffer);
	}

	uni::BaseElementConst AsSkeletons() const override {
		return { static_cast<const SkeletonList *>(this), false };
	}

	uni::BaseElementConst AsMotions() const override {
		return { static_cast<const MotionList484 *>(this), false };
	}

	void Fixup() override;
	void Build() override;

public:
	static constexpr uint64 ID = CompileFourCC("mlst");
	static constexpr uint64 VERSION = 484;
};

