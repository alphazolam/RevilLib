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

//This file updated by alphaZomega in 2022 for support of mot.495, mot.492, mot.456, motlist.528, motlist.524, and motlist.484

#include "datas/except.hpp"
#include "motion_list_484.hpp"
#include "motion_list_486.hpp"
#include "motion_list_99.hpp"
#include <set>
#include <unordered_map>

using ptr_type_ = std::unique_ptr<REAssetImpl>;

template <class C> struct f_ {
  static ptr_type_ creator() { return std::make_unique<C>(); }
};

template <class C> static auto make() {
  return std::make_pair(C::ID | C::VERSION << 32, f_<C>::creator);
}

static const std::set<uint64> supAssets = {
    REMotlist60Asset::ID,
    REMotion43Asset::ID,
};

static const std::unordered_map<uint64, decltype(&f_<void>::creator)>
    assetRegistry = {
        make<REMotlist60Asset>(), make<REMotlist85Asset>(),
        make<REMotlist99Asset>(), make<REMotlist486Asset>(), 
		make<REMotlist484Asset>(), make<REMotlist524Asset>(),
		make<REMotlist528Asset>(), make<REMotlist653Asset>(),
        make<REMotion43Asset>(),  make<REMotion78Asset>(),
        make<REMotion65Asset>(),  make<REMotion458Asset>(), 
		make<REMotion456Asset>(), make<REMotion492Asset>(),
		make<REMotion495Asset>(), make<REMotion603Asset>(),
};

REAssetImpl::Ptr REAssetImpl::Create(REAssetBase base) {
  uint64 key = base.assetFourCC;
  key |= static_cast<uint64>(base.assetID) << 32;

  if (assetRegistry.count(key)) {
    return assetRegistry.at(key)();
  } else {
    if (supAssets.count(base.assetFourCC)) {
      throw es::InvalidHeaderError(base.assetFourCC);
    } else {
      throw es::InvalidVersionError(base.assetID);
    }
  }
}

thread_local std::vector<void *> es::usedPts;
