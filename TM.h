/***************************************************************************
 *   Copyright (C) 2015 by                                                 *
 *   - Carlos Eduardo Millani (carloseduardomillani@gmail.com)             *
 *   - Edson Borin (edson@ic.unicamp.br)                                   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
    
#ifndef TM_H
#define TM_H
/********************************************************************
** tm_init(void)                                                   **
**                                                                 **
**    Responsible for initializing all COISA stack, such as the    **
** timer, the serial communication and the event handler. It will  **
** then monitor for incomming commands and events, controlling the **
** vm_cpu.                                                         **
********************************************************************/
#include <string>

void tm_init(void);
char receivingString(const std::string &fileB64Encoded);

class ThingMonitor
{
public:
	explicit ThingMonitor();
	// ~ThingMonitor();
	bool InstallCode(const std::string &fileB64Encoded);
	void RunCode(void);
	bool ExecuteStep(void);
	void Reseting(void);
	void Restart(void);
	// void Tm_init(void);
	// void Loop(void);
};

#endif // TM_H