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

#define BINARY      2
#define OCTAL       8
#define DECIMAL     10
#define HEXADECIMAL 16

#define MAX_BASE    36
#define BUF_SIZE    512

// Error codes
#define NO_ARG      1
#define INV_ARG     2
#define INV_BASE    3

// Converter functions
void convertBase(char *input, int in_base, int out_base);  /* Convert base X to base Y               */
void convertFromAscii(char *input, int out_base);          /* Convert specified base to ASCII        */
void convertToAscii(char *input, int in_base);             /* Convert ASCII to specified base        */

// Basic error handling functions
void noArgument();                                         /* Handle error when no argument          */
void invalidArgument();                                    /* Handle error when invalid argument     */
void baseNotSupported();                                   /* Handle error when base X not supported */

// Applet stuff
void showUsage(char *applet);                              /* Show usage for regular applets         */
