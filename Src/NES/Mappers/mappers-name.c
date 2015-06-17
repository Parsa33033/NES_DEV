/**
 * NES_DEV is a cross-platform, portable, and hand-held NES emulator.
 *
 * Copyright (C) 2015  Vahid Heidari (DeltaCode)
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "mappers-name.h"

char* mappers_name[256] =
{
	MAPPER_TO_STRING(NROM),
	MAPPER_TO_STRING(NINTENDO_MMC1),
	MAPPER_TO_STRING(UNROM),
	MAPPER_TO_STRING(CNROM),
	MAPPER_TO_STRING(NINTENDO_MMC3),
	MAPPER_TO_STRING(NINTENDO_MMC5),
	MAPPER_TO_STRING(FFE_F4XXX),
	MAPPER_TO_STRING(AOROM),
	MAPPER_TO_STRING(FFE_F3XXX),
	MAPPER_TO_STRING(NINTENDO_MMC2),
	MAPPER_TO_STRING(NINTENDO_MMC4),
	MAPPER_TO_STRING(COLOR_DREAMS_CHIP),
	MAPPER_TO_STRING(FFE_F6XXX),

	"???", "???",															///  13,  14,

	MAPPER_TO_STRING(_100_IN_1),
	MAPPER_TO_STRING(BANDAI_CHIP),
	MAPPER_TO_STRING(FFE_F8XXX),
	MAPPER_TO_STRING(JALECO_SS8806_CHIP),
	MAPPER_TO_STRING(NAMCOT_106_CHIP),
	MAPPER_TO_STRING(NINTENDO_DISK_SYSTEM),
	MAPPER_TO_STRING(KONAMI_VRC4A),
	MAPPER_TO_STRING(KONAMI_VRC2A_1),
	MAPPER_TO_STRING(KONAMI_VRC2A_2),
	MAPPER_TO_STRING(KONAMI_VRC6),
	MAPPER_TO_STRING(KONAMI_VRC4B),

	"???", "???", "???", "???", "???", "???",								///  26,  27,  28,  29,  30,  31,

	MAPPER_TO_STRING(IREM_G_101_CHIP),
	MAPPER_TO_STRING(TAITO_TC0190_TC0350),
	MAPPER_TO_STRING(_32_KB_ROM),

	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	///  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	///  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,
	"???", "???", "???", "???", "???", "???", "???", "???", "???",			///  55,  56,  57,  58,  59,  60,  61,  62,  63,

	MAPPER_TO_STRING(TENGEN_RAMBO_1_CHIP),
	MAPPER_TO_STRING(IREM_H_3001_CHIP),
	MAPPER_TO_STRING(GEROM),
	MAPPER_TO_STRING(SUN_SOFT3_CHIP),
	MAPPER_TO_STRING(SUN_SOFT4_CHIP),
	MAPPER_TO_STRING(SUN_SOFT5_FME_7_CHIP),

	"???",																	///  70,

	MAPPER_TO_STRING(CAMERICA_CHIP),

	"???", "???", "???", "???", "???", "???",								///  72,  73,  74,  75,  76,  77,

	MAPPER_TO_STRING(IREM_74HC161_32_BASED),

	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	///  79,  80,  81,  82,  83,  84,  85,  86,  87,  88,
	"???", "???",															///  89,  90,

	MAPPER_TO_STRING(PIRATE_HK_SF3_CHIP),

	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	///  92,  93,  94,  95,  96,  97,  98,  99, 100, 101,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	/// 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	/// 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	/// 122, 123, 124, 125, 126, 127, 128, 129, 130, 131,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	/// 132, 133, 134, 135, 136, 137, 138, 139, 140, 141,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	/// 142, 143, 144, 145, 146, 147, 148, 149, 150, 151,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	/// 152, 153, 154, 155, 156, 157, 158, 159, 160, 161,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	/// 162, 163, 164, 165, 166, 167, 168, 169, 170, 171,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	/// 172, 173, 174, 175, 176, 177, 178, 179, 180, 181,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	/// 182, 183, 184, 185, 186, 187, 188, 189, 190, 191,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	/// 192, 193, 194, 195, 196, 197, 198, 199, 200, 201,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	/// 202, 203, 204, 205, 206, 207, 208, 209, 210, 211,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	/// 212, 213, 214, 215, 216, 217, 218, 219, 220, 221,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	/// 222, 223, 224, 225, 226, 227, 228, 229, 230, 231,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	/// 232, 233, 234, 235, 236, 237, 238, 239, 240, 241,
	"???", "???", "???", "???", "???", "???", "???", "???", "???", "???",	/// 242, 243, 244, 245, 246, 247, 248, 249, 250, 251,
	"???", "???", "???"														/// 253, 254, 255,
};

char* name_of_mapper(uint8_t m)
{
	return mappers_name[m];
}
