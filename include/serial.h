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

#ifndef ARCH_SERIAL_H
#define ARCH_SERIAL_H

#include <stdint.h>

void enable_commands(void);
void send_byte(unsigned char byte);
char read_byte(void);
void serial_configure(unsigned int baudrate); // Allow user to enable and disable interruptions later
void printnum(int32_t number);
void print(char *str);

// -------------------------------

void print_int32(int32_t number);
void print_float(uint32_t float_address, uint32_t precision);
void print_double(uint32_t double_address, uint32_t precision);
void print_string(char *str);

#endif // ARCH_SERIAL_H