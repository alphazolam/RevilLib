/*  Revil Format Library
    Copyright(C) 2021 Lukas Cone

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
#include "ext_base.hpp"

static const MtExtensionsStorage extMHGCommon{
    {"abd", 0x327E327E},                //
    {"acd", 0x737234F5},                //
    {"acn", 0x58ACE42},                 //
    {"acrd", 0x7522DD13},               //
    {"amlt", 0x3E2A4D8E},               //
    {"amskl", 0x692F5},                 //
    {"amslt", 0x21F33E01},              //
    {"ane", 0x5D2E4199},                //
    {"angryprm", 0x790203B0},           //
    {"apd", 0x63F2D70D},                //
    {"ape", 0x3B04F5A1},                //
    {"arc", 0x73850D05},                //
    {"ard", 0x3C51E03C},                //
    {"areaacttbl", 0x7F2E2EE0},         //
    {"areaeatdat", 0x56D892D0},         //
    {"arealinkdat", 0x1EE1ED64},        //
    {"arealinkdat", 0x4BF84F6F},        //
    {"areapatrol", 0x947F3C8},          //
    {"areaseldat", 0x15E98D21},         //
    {"asd", 0x7896B60A},                //
    {"ased", 0x17CA1B2},                //
    {"atd", 0x7B54B600},                //
    {"atr", 0x77D70343},                //
    {"bdd", 0x1AC7B52D},                //
    {"bgsd", 0x368E9519},               //
    {"bui", 0xAB54515},                 //
    {"ccl", 0x26E7FF},                  //
    {"cms", 0x5F6A387F},                //
    {"cskd", 0x542767EC},               //
    {"ctc", 0x535D969F},                //
    {"dcd", 0x2229D051},                //
    {"deco", 0xA7DB17E},                //
    {"dtb", 0x59D9C3DA},                //
    {"dtp", 0x1BBC291E},                //
    {"dtt", 0x48E8AC29},                //
    {"ean", 0x4E397417},                //
    {"ebcd", 0x252BD342},               //
    {"efl", 0x6D5AE854},                //
    {"emc", 0x3AABBA02},                //
    {"emsizetbl", 0x5ADC692C},          //
    {"emyure", 0x1800EB37},             //
    {"equr", 0x2B40AE8F},               //
    {"esl", 0x32CA92F8},                //
    {"ext", 0x58BC1C29},                //
    {"fht", 0x24080FFF},                //
    {"fld", 0x6A1670F0},                //
    {"fmi", 0x156A8085},                //
    {"fms", 0x61C203A4},                //
    {"fmt", 0x6C7327B},                 //
    {"frl", 0x30991F46},                //
    {"fup", 0x496F8F22},                //
    {"gfd", 0x2D462600},                //
    {"gii", 0x7F768AF},                 //
    {"gmd", 0x242BB29A},                //
    {"gpd", 0x5812AC77},                //
    {"gr2", 0x11C35522},                //
    {"gr2s", 0x628DFB41},               //
    {"gui", 0x22948394},                //
    {"hde", 0x70BB64BA},                //
    {"hdp", 0x4E2EF008},                //
    {"hds", 0x4EB68CEE},                //
    {"hgi", 0x33A84E14},                //
    {"hta", 0x294A5E8D},                //
    {"hts", 0x5653C1B0},                //
    {"iaf", 0x3443F314},                //
    {"ict", 0x3FA5AD6A},                //
    {"igf", 0x300DB281},                //
    {"insectabirity", 0x141C243A},      //
    {"insectessenceskill", 0x6E765E35}, //
    {"ipl", 0x25FD693F},                //
    {"ips", 0x52776AB1},                //
    {"ipt", 0x63F62424},                //
    {"isa", 0x38534E81},                //
    {"isd", 0x11DE9EF6},                //
    {"isl", 0x48B16938},                //
    {"isp", 0x76A1D9A2},                //
    {"itm", 0x7C4883A8},                //
    {"itp", 0x5B8E6BF3},                //
    {"kad", 0x6E972F76},                //
    {"kc1", 0x237E6120},                //
    {"kc2", 0x3A77309A},                //
    {"kc3", 0x4D70000C},                //
    {"kca", 0x6D964D19},                //
    {"kcg", 0x233A9F13},                //
    {"kcm", 0xC7468EA},                 //
    {"kcr", 0xC6C4DBF},                 //
    {"kcs", 0x24F0A487},                //
    {"kod", 0x2DD067F},                 //
    {"lcm", 0x39C52040},                //
    {"lmt", 0x76820D81},                //
    {"mai", 0x66D7CD8A},                //
    {"maptime", 0x197E4D7A},            //
    {"mcm", 0x117D7CD0},                //
    {"mcn", 0x7F416CE5},                //
    {"mdd", 0x1F149AEC},                //
    {"mex", 0x19C994C4},                //
    {"mla", 0x7D025838},                //
    {"mlc", 0x2A68813F},                //
    {"mle", 0x4A91DDB9},                //
    {"mod", 0x58A15856},                //
    {"mpm", 0x7CD0E77E},                //
    {"mre", 0x36C909FD},                //
    {"mri", 0x64844D84},                //
    {"mrl", 0x2749C8A8},                //
    {"mrs", 0x626BC4D6},                //
    {"mss", 0x10EBE843},                //
    {"mvp", 0x41925D7},                 //
    {"nan", 0x630ED7BB},                //
    {"nis", 0x430075D},                 //
    {"nld", 0x164F60FF},                //
    {"npcBd", 0x6D5AAA39},              //
    {"npcId", 0x43062A33},              //
    {"npcMd", 0x3488527B},              //
    {"npcMdl", 0x699AC631},             //
    {"npcSd", 0x1A273E8B},              //
    {"ntd", 0x1A3E9CBA},                //
    {"oar", 0x6D81CFDD},                //
    {"oec", 0x620FD81},                 //
    {"olos", 0x79FF11C9},               //
    {"olsk", 0x7B572569},               //
    {"olvl", 0x4B51E836},               //
    {"opl", 0x6F56B442},                //
    {"osa", 0x7C5E6060},                //
    {"oskl", 0xF86C052},                //
    {"otd", 0x3C285CC6},                //
    {"otil", 0x2BCFB893},               //
    {"otml", 0xC0FAB06},                //
    {"otp", 0x5B0DD78A},                //
    {"otpt", 0x69B525DF},               //
    {"owp", 0x681FA774},                //
    {"oxpb", 0x5EA6AA68},               //
    {"oxpv", 0x7039F76F},               //
    {"pcl", 0x10CEDAEA},                //
    {"pec", 0x6FCC7AD4},                //
    {"pel", 0x5A525C16},                //
    {"pep", 0x20ED9750},                //
    {"plbasecmd", 0x5139901D},          //
    {"plcmdtbllist", 0x4B4C2BD3},       //
    {"plpartsdisp", 0x66C89ED2},        //
    {"plweplist", 0x233A2C4D},          //
    {"pma", 0x18A9225C},                //
    {"pntpos", 0x450A16E3},             //
    {"psl", 0x254309C9},                //
    {"pts", 0x4541367C},                //
    {"qsg", 0x61CF79AF},                //
    {"ext", 0x1BBFD18E},                //
    {"raps", 0x6EC8125C},               //
    {"rdb", 0x583F70B0},                //
    {"rem", 0x160329F8},                //
    {"rem", 0x5B3C302D},                //
    {"rlt", 0x1E329EFC},                //
    {"sab", 0x7A395CB7},                //
    {"sad", 0x458DE878},                //
    {"sai", 0x2A8800EE},                //
    {"saou", 0x2F1C6767},               //
    {"sbc", 0x51FC779F},                //
    {"sbkr", 0x15D782FB},               //
    {"scd", 0x6B41A2F9},                //
    {"scsr", 0xECD7DF4},                //
    {"sdl", 0x4C0DB839},                //
    {"sdsr", 0x315E81F},                //
    {"sem", 0x2553701D},                //
    {"sep", 0x1EB12C38},                //
    {"ses", 0x2543B93E},                //
    {"sfsa", 0x58072136},               //
    {"shell", 0x4AA69872},              //
    {"slt", 0x619D23DF},                //
    {"sid", 0xC6D4399},                 //
    {"sis", 0x65375D5},                 //
    {"skd", 0x39C8DC68},                //
    {"skt", 0x4C3942E3},                //
    {"sla00", 0x5CA6DB93},              //
    {"sls", 0x5E5B44C8},                //
    {"slw00", 0x440D0451},              //
    {"slw01", 0x330A34C7},              //
    {"slw02", 0x2A03657D},              //
    {"slw03", 0x5D0455EB},              //
    {"slw04", 0x4360C048},              //
    {"slw06", 0x2D6EA164},              //
    {"slw07", 0x5A6991F2},              //
    {"slw08", 0x4AD68C63},              //
    {"slw09", 0x3DD1BCF5},              //
    {"slw10", 0x5D163510},              //
    {"slw11", 0x2A110586},              //
    {"slw12", 0x3318543C},              //
    {"slw13", 0x441F64AA},              //
    {"slw14", 0x5A7BF109},              //
    {"spval", 0x74A22486},              //
    {"squs", 0x710688E2},               //
    {"ssjje", 0x25A60BC4},              //
    {"ssjjp", 0x332CF371},              //
    {"tams", 0x751AFF22},               //
    {"tex", 0x241F5DEB},                //
    {"tlil", 0x55FCA0F5},               //
    {"tpil", 0x19F2AB31},               //
    {"trdl", 0x25334DDE},               //
    {"tril", 0x29751294},               //
    {"trll", 0x2754877D},               //
    {"tucyl", 0x2FC0C6C5},              //
    {"tuto", 0x56CCDBC},                //
    {"vfp", 0x62220853},                //
    {"w00d", 0x4199032B},               //
    {"w00d", 0x437D7704},               //
    {"w00m", 0x29482CCB},               //
    {"w01d", 0x2CBF1C3A},               //
    {"w01d", 0x56E21768},               //
    {"w01m", 0x65E22C55},               //
    {"w02d", 0x4788A739},               //
    {"w02d", 0x6F6F2BAD},               //
    {"w02m", 0x6B6D2BB6},               //
    {"w03d", 0x284ACC07},               //
    {"w03d", 0x78143FEE},               //
    {"w03m", 0x27C72B28},               //
    {"w04d", 0x1C755227},               //
    {"w04d", 0x4A96D77E},               //
    {"w04m", 0x2D022231},               //
    {"w06d", 0x32837AA1},               //
    {"w06d", 0x4E630743},               //
    {"w06m", 0x6F27254C},               //
    {"w07d", 0x21A16C7D},               //
    {"w07d", 0x25F86EE2},               //
    {"w07m", 0x238D25D2},               //
    {"w08d", 0x50AA37F0},               //
    {"w08d", 0x7A41A133},               //
    {"w08m", 0x7AAD377E},               //
    {"w09d", 0x3F685CCE},               //
    {"w09d", 0x6D3AB570},               //
    {"w09m", 0x360737E0},               //
    {"w10d", 0x2E5B6815},               //
    {"w10d", 0x2F3A8C4},                //
    {"w10m", 0x3E333888},               //
    {"w11d", 0x39207C56},               //
    {"w11d", 0x6D31C3FA},               //
    {"w11m", 0x72993816},               //
    {"w12d", 0x60678F9},                //
    {"w12d", 0xAD4093},                 //
    {"w12m", 0x7C163FF5},               //
    {"w13d", 0x17D654D0},               //
    {"w13d", 0x69C413C7},               //
    {"w13m", 0x30BC3F6B},               //
    {"w14d", 0x73B73919},               //
    {"w14d", 0xB1808BE},                //
    {"w14m", 0x3A793672},               //
    {"way", 0x5F36B659},                //
    {"wcd", 0x42354DC6},                //
    {"wpd", 0x15FCE6C6},                //
};

static const MtExtensionsStorage extMHGN3DS{
    {"lan", 0x41E33404},      //
    {"lanl", 0x708E0028},     //
    {"lfd", 0x3516C3D2},      //
    {"lyt", 0x15302EF4},      //
    {"ptex", 0x3756EE15},     //
    {"revr_ctr", 0x232E228C}, //
    {"skmt", 0x70C56D5E},     //
    {"sksg", 0x2C59EEA9},     //
    {"skst", 0x19278D07},     //
    {"srqr", 0x1BCC4966},     //
    {"stqr", 0x167DBBFF},     //
};

static const MtExtensionsStorage extMHGNSW{
    {"adpcm", 0x79C47B59},     //
    {"alc", 0x43057C7C},       //
    {"AngleLimit", 0xDD0E47A}, //
    {"ctl", 0x70709F3F},       //
    {"ots", 0x3464995E},       //
    {"ots", 0x3F13DE3C},       //
    {"qdl", 0xE0BB1C},         //
    {"qdm", 0x2929600},        //
    {"qdp", 0x26BEC21C},       //
    {"revr", 0x232E228C},      //
    {"spkg", 0x2358E1A},       //
    {"srqr", 0x1BCC4966},      //
    {"stqr", 0x167DBBFF},      //
    {"sup", 0x54539AEE},       //
    {"tcil", 0x430F0258},      //
    {"vibpl", 0x77044C04},     //
};

static const MtExtensions extMHG{
    &extMHGCommon,               //
    Platform::N3DS, &extMHGN3DS, //
    Platform::NSW,  &extMHGNSW,
};