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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "applet.h"

// Main program info
#define VERSION "0.4"
#define AUTHOR  "Leonid Plyushch <leonid.x212@gmail.com>"
#define LICENSE "GNU GPL v3"


int main(int argc, char **argv)
{
	char *applet = strtok(strrchr(argv[0], '/'), "/");

	if(strcmp(applet, "bin2ascii") == 0){

		bin2ascii(argc, argv, applet);

	}else if(strcmp(applet, "bin2oct") == 0){

		bin2oct(argc, argv, applet);

	}else if(strcmp(applet, "bin2dec") == 0){

		bin2dec(argc, argv, applet);

	}else if(strcmp(applet, "bin2hex") == 0){

		bin2hex(argc, argv, applet);

	}else if(strcmp(applet, "oct2ascii") == 0){

		oct2ascii(argc, argv, applet);

	}else if(strcmp(applet, "oct2bin") == 0){

		oct2bin(argc, argv, applet);

	}else if(strcmp(applet, "oct2dec") == 0){

		oct2dec(argc, argv, applet);

	}else if(strcmp(applet, "oct2hex") == 0){

		oct2hex(argc, argv, applet);

	}else if(strcmp(applet, "dec2ascii") == 0){

		dec2ascii(argc, argv, applet);

	}else if(strcmp(applet, "dec2bin") == 0){

		dec2bin(argc, argv, applet);

	}else if(strcmp(applet, "dec2oct") == 0){

		dec2oct(argc, argv, applet);

	}else if(strcmp(applet, "dec2hex") == 0){

		dec2hex(argc, argv, applet);

	}else if(strcmp(applet, "hex2ascii") == 0){

		hex2ascii(argc, argv, applet);

	}else if(strcmp(applet, "hex2bin") == 0){

		hex2bin(argc, argv, applet);

	}else if(strcmp(applet, "hex2oct") == 0){

		hex2oct(argc, argv, applet);

	}else if(strcmp(applet, "hex2dec") == 0){

		hex2dec(argc, argv, applet);

	}else if(strcmp(applet, "ascii2bin") == 0){

		ascii2bin(argc, argv, applet);

	}else if(strcmp(applet, "ascii2oct") == 0){

		ascii2oct(argc, argv, applet);

	}else if(strcmp(applet, "ascii2dec") == 0){

		ascii2dec(argc, argv, applet);

	}else if(strcmp(applet, "ascii2hex") == 0){

		ascii2hex(argc, argv, applet);

	}else if(strcmp(applet, "ibase") == 0){

		ibase(argc, argv, applet);

	}else{

		puts("\n BinDecHexAscii is a multi-call program for converting numbers between bases.\n");
		puts(" For usage, you must create symlink from bindechexascii to specified applet.\n");
		puts(" Current applets:");
		puts("    ibase, ascii2bin, ascii2oct, ascii2dec, ascii2hex, bin2ascii, bin2oct, ");
		puts("    bin2dec, bin2hex, oct2ascii, oct2bin, oct2dec, oct2hex, dec2ascii, ");
		puts("    dec2bin, dec2oct, dec2hex, hex2ascii, hex2bin, hex2oct, hex2dec.\n");
		puts(" Examples:");
		puts("    1. To convert 101011 from binary to decimal, type in console:");
		puts("       \'$ bin2dec 101011\' or \'$ dec2bin -r 101011\' and output will be");
		puts("       \'DEC: 43\'.\n");
		puts("    2. To convert from/to custom base specified number:");
		puts("       \'$ ibase -i 16 -o 4 5F\' and output will be");
		puts("       \'Base 16 to 4, output: 1133\'.\n");
		puts(" Program info:");
		printf("    Version: %s, %s.\n", VERSION, __DATE__);
		printf("    Author: %s.\n", AUTHOR);
		printf("    Licensed under %s\n\n", LICENSE);

	}

	return 0;
}

