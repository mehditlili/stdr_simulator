/******************************************************************************
   STDR Simulator - Simple Two DImensional Robot Simulator
   Copyright (C) 2013 STDR Simulator
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
   
   Authors : 
   * Manos Tsardoulias, etsardou@gmail.com
   * Aris Thallas, aris.thallas@gmail.com
   * Chris Zalidis, zalidis@gmail.com 
******************************************************************************/
#ifndef STDR_GUI_CO2_SOURCE_CONTAINER
#define STDR_GUI_CO2_SOURCE_CONTAINER

#include "stdr_gui/stdr_tools.h"

namespace stdr_gui
{

	class CGuiCo2Source
	{
		private:
			QPoint position_;	
			std::string name_;		
		public:
			CGuiCo2Source(QPoint p);
			~CGuiCo2Source(void);
			std::string getName(void);
			bool checkProximity(QPoint p);
	};	
}

#endif

