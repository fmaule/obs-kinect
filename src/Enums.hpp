/******************************************************************************
	Copyright (C) 2020 by Jérôme Leclercq <lynix680@gmail.com>

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
******************************************************************************/

#pragma once

#ifndef OBS_KINECT_PLUGIN_ENUMS
#define OBS_KINECT_PLUGIN_ENUMS

#include <cstdint>

enum EnabledSources
{
	Source_Body                = 1 << 0,
	Source_Color               = 1 << 1,
	Source_ColorToDepthMapping = 1 << 2,
	Source_Depth               = 1 << 3,
	Source_Infrared            = 1 << 4
};

using EnabledSourceFlags = std::uint32_t;

enum class ProcessPriority
{
	Normal = 0,
	AboveNormal = 1,
	High = 2
};

#endif
