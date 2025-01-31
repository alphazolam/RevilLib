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
#include "datas/allocator_hybrid.hpp"
#include "datas/deleter_hybrid.hpp"
#include "datas/pointer.hpp"
#include "revil/re_asset.hpp"
#include "uni/common.hpp"
#include <vector>

using namespace revil;

thread_local extern std::vector<void*> ptrStore;

template <class C> struct REArray {
  esPointerX64<C> ptr;
  int32 numItems;
};

struct REAssetBase {
  uint32 assetID, assetFourCC;

  template <class C, class I> static C &Get(I &data) {
    return reinterpret_cast<C &>(data[0]);
  }
};

class revil::REAssetImpl {
public:
  using Ptr = std::unique_ptr<REAssetImpl>;
  using buffer_type = std::vector<char, es::allocator_hybrid<char>>;
  buffer_type buffer;
  void Load(BinReaderRef rd);
  static Ptr Create(REAssetBase base);
  void Assign(REAssetBase *data);
  virtual void Fixup() = 0;
  virtual void Build() = 0;
  virtual uni::BaseElementConst AsMotion() const { return {}; }
  virtual uni::BaseElementConst AsMotions() const { return {}; }
  virtual uni::BaseElementConst AsSkeletons() const { return {}; }
  virtual ~REAssetImpl() = default;
};
