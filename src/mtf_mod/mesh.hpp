/*  Revil Format Library
    Copyright(C) 2017-2021 Lukas Cone

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
#include "datas/bitfield.hpp"
#include "datas/flags.hpp"
#include "datas/vectors_simd.hpp"

struct MODPrimitiveProxyV1;
namespace revil {
class MODImpl;
}

struct MODMeshX99 {
  uint16 unk;
  uint16 materialIndex;
  bool visible;
  es::Flags<uint8> visibleLOD; // only 3 LODs
  uint8 unk02[2];              // 0: opacity flags?
  uint8 buffer0Stride;
  uint8 buffer1Stride;
  uint8 unk01;
  uint16 numVertices;
  uint16 endIndex;
  uint32 vertexStart;
  uint32 vertexStreamOffset;
  uint32 vertexStream2Offset;
  uint32 indexStart;
  uint32 numIndices;
  uint32 indexValueOffset;
  uint8 unk050[2];
  uint16 startIndex;
  uint8 numEnvelopes;
  uint8 boneRemapIndex;
  uint32 firstEnvelope; // assigned at runtime

  MODPrimitiveProxyV1 ReflectLE(revil::MODImpl &);
  MODPrimitiveProxyV1 ReflectBE(revil::MODImpl &);
};

struct MODMeshX70 {
  uint16 unk;
  uint16 materialIndex;
  uint8 visible;
  es::Flags<uint8> visibleLOD; // only 3 LODs
  uint8 unk02[2];
  uint8 buffer0Stride;
  uint8 buffer1Stride;
  uint8 unk01;
  uint32 numVertices;
  uint32 vertexStart;
  uint32 vertexStreamOffset;
  uint32 vertexStream2Offset;
  uint32 indexStart;
  uint32 numIndices;
  uint32 indexValueOffset;
  Vector4A16 bboxMin;
  Vector4A16 bboxMax;

  MODPrimitiveProxyV1 ReflectBE(revil::MODImpl &);
  MODPrimitiveProxyV1 ReflectLE(revil::MODImpl &) { return {}; }
};

struct MODMeshXC5 {
  using GroupIndex = BitMemberDecl<0, 12>;
  using MaterialIndex = BitMemberDecl<1, 12>;
  using VisibleLOD = BitMemberDecl<2, 8>;
  using BitField00 =
      BitFieldType<uint32, GroupIndex, MaterialIndex, VisibleLOD>;

  using Visible = BitMemberDecl<0, 1>;
  using Flag0 = BitMemberDecl<1, 1>;
  using Flag1 = BitMemberDecl<2, 1>;
  using Unk00 = BitMemberDecl<3, 5>;
  using BitField01 = BitFieldType<uint8, Visible, Flag0, Flag1, Unk00>;

  enum class PrimitiveType : uint8 {
    Points,
    Lines,
    LineStrips,
    Triangles,
    Strips,
  };

  int16 unk; // somehow essential, must be an odd number
  uint16 numVertices;
  BitField00 data0;
  BitField01 data1;
  uint8 unk02;
  uint8 bufferStride;
  PrimitiveType primitiveType;
  uint32 vertexBaseOffset;
  uint32 vertexOffset;
  uint32 vertexFormat;
  uint32 faceBaseOffset;
  uint32 numFaces;
  uint32 faceOffset;
  uint16 numEnvelopes;
  uint16 meshIndex;
  uint16 minVertex;
  uint16 maxVertex;
  uint32 hash;

  MODPrimitiveProxy ReflectLE(const revil::MODImpl &) const { return {}; }
  MODPrimitiveProxy ReflectBE(const revil::MODImpl &) const { return {}; }
};
