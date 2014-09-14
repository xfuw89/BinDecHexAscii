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

#include "libstuff.h"

const char *digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // Digits


void convertBase(char *input, int in_base, int out_base)
{
	char *out = malloc(BUF_SIZE * sizeof(char));

	unsigned long tmp = 0, val = 0;
	unsigned int k = 1;

	tmp = strtol(input, &input, in_base);

	while(tmp > 0)
	{
		val = tmp % out_base;
		tmp = tmp / out_base;

		out[k++] = digits[val];
	}

	for(int i=k-1; i>0; i--)
	{
		printf("%c", out[i]);
	}

	printf("\x20");

	free(out);
}


void convertFromAscii(char *input, int out_base)
{
	char *out = malloc(512 * sizeof(char));

	for(int i=0; i<strlen(input); i++)
	{
		unsigned int tmp = 0, val = 0, k = 1;

		tmp = (char)input[i];

		while(tmp > 0)
		{
			val = tmp % out_base;
			tmp = tmp / out_base;

			out[k++] = digits[val];
		}

		for(int i=k-1; i>0; i--)
		{
			printf("%c", out[i]);
		}

		printf("\x20");
	}

	free(out);
}


void convertToAscii(char *input, int in_base)
{
	unsigned long tmp = strtol(input, &input, in_base);
	printf("%c\x20", (char)tmp);
}


//
//		ERROR HANDLING
//

void noArgument(char *applet)
{
	fprintf(stderr, "Error: no argument !\n");
	showUsage(applet);
	exit(NO_ARG);
}


void invalidArgument(char *applet)
{
	fprintf(stderr, "Error: invalid argument !\n");
	showUsage(applet);
	exit(INV_ARG);
}


void baseNotSupported()
{
	fprintf(stderr, "Error: base > %d and base < 2 not supported !\n", MAX_BASE);
	exit(INV_BASE);
}


//
//		STUFF FOR APPLETS
//

void showUsage(char *applet)
{
	if(strcmp(applet, "ibase") == 0){
		printf("\n\x20Usage: %s [-i In Base] [-o Out Base] arg1 arg2 arg3 ...\n", applet);
		printf("\x20\x20-h   This help\n");
		printf("\x20\x20-i   Base of input values\n");
		printf("\x20\x20-o   Base of output values\n\n");
	}else{
		printf("\n\x20Usage: %s [-r] arg1 arg2 arg3 ...\n", applet);
		printf("\x20\x20-h   This help\n");
		printf("\x20\x20-r   Reverse conversion\n\n");
	}
}

