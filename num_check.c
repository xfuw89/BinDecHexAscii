/*
*  Simple ASCII / BIN / DEC / HEX converter
*  Copyright Leonid Plyushch © 2014 <leonid.x212@gmail.com>
*
*  This file is part of BinDecHexAscii.
*
*  BinDecHexAscii is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  BinDecHexAscii is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "num_check.h"

bool is_bin(char ch)
{
	if(ch == '0' || ch == '1'){
		return true;
	} else {
		return false;
	}
}

bool is_oct(char ch)
{
	if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || 
		ch == '6' || ch == '7'){
		return true;
	} else {
		return false;
	}
}

bool is_dec(char ch)
{
	if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || 
		ch == '6' || ch == '7' || ch == '8' || ch == '9'){
		return true;
	} else {
		return false;
	}
}

