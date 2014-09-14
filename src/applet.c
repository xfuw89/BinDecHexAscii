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
#include <stdbool.h>
#include <getopt.h>

#include "libstuff.h"
#include "applet.h"


//
//		BINARY CONVERSION
//

// Convert binary to ASCII (Text)
void bin2ascii(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("BIN: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("ASCII: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertFromAscii(argv[i], BINARY);
			}else{
				convertToAscii(argv[i], BINARY);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



// Convert binary to octal
void bin2oct(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("BIN: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("OCT: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertBase(argv[i], OCTAL, BINARY);
			}else{
				convertBase(argv[i], BINARY, OCTAL);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



// Convert binary to decimal
void bin2dec(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("BIN: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("DEC: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertBase(argv[i], DECIMAL, BINARY);
			}else{
				convertBase(argv[i], BINARY, DECIMAL);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



// Convert binary to hex
void bin2hex(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("BIN: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("HEX: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertBase(argv[i], HEXADECIMAL, BINARY);
			}else{
				convertBase(argv[i], BINARY, HEXADECIMAL);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



//
//		OCTAL CONVERSION
//

// Convert octal to ASCII (Text)
void oct2ascii(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r': 
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("OCT: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("ASCII: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertFromAscii(argv[i], OCTAL);
			}else{
				convertToAscii(argv[i], OCTAL);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



// Convert octal to binary
void oct2bin(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("OCT: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("BIN: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertBase(argv[i], BINARY, OCTAL);
			}else{
				convertBase(argv[i], OCTAL, BINARY);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



// Convert octal to decimal
void oct2dec(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("OCT: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("DEC: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertBase(argv[i], DECIMAL, OCTAL);
			}else{
				convertBase(argv[i], OCTAL, DECIMAL);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



// Convert octal to hexadecimal
void oct2hex(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("OCT: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("HEX: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertBase(argv[i], HEXADECIMAL, OCTAL);
			}else{
				convertBase(argv[i], OCTAL, HEXADECIMAL);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



//
//		DECIMAL CONVERSION
//

// Convert decimal to ASCII (Text)
void dec2ascii(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("DEC: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("ASCII: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertFromAscii(argv[i], DECIMAL);
			}else{
				convertToAscii(argv[i], DECIMAL);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



// Convert decimal to binary
void dec2bin(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("DEC: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("BIN: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertBase(argv[i], BINARY, DECIMAL);
			}else{
				convertBase(argv[i], DECIMAL, BINARY);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



// Convert decimal to octal
void dec2oct(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("DEC: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("OCT: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertBase(argv[i], OCTAL, DECIMAL);
			}else{
				convertBase(argv[i], DECIMAL, OCTAL);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



// Convert decimal to hexadecimal
void dec2hex(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("DEC: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("HEX: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertBase(argv[i], HEXADECIMAL, DECIMAL);
			}else{
				convertBase(argv[i], DECIMAL, HEXADECIMAL);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



//
//		HEXADECIMAL CONVERSION
//

// Convert hexadecimal to ASCII (Text)
void hex2ascii(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("HEX: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("ASCII: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertFromAscii(argv[i], HEXADECIMAL);
			}else{
				convertToAscii(argv[i], HEXADECIMAL);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



// Convert hexadecimal to binary
void hex2bin(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("HEX: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("BIN: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertBase(argv[i], BINARY, HEXADECIMAL);
			}else{
				convertBase(argv[i], HEXADECIMAL, BINARY);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



// Convert hexadecimal to octal
void hex2oct(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("HEX: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("OCT: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertBase(argv[i], OCTAL, HEXADECIMAL);
			}else{
				convertBase(argv[i], HEXADECIMAL, OCTAL);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



// Convert hexadecimal to decimal
void hex2dec(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("HEX: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("DEC: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertBase(argv[i], DECIMAL, HEXADECIMAL);
			}else{
				convertBase(argv[i], HEXADECIMAL, DECIMAL);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



//
//		ASCII CONVERSION
//

// Convert ASCII to binary
void ascii2bin(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("ASCII: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("BIN: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertToAscii(argv[i], BINARY);
			}else{
				convertFromAscii(argv[i], BINARY);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



// Convert ASCII to octal
void ascii2oct(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("ASCII: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("OCT: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertToAscii(argv[i], OCTAL);
			}else{
				convertFromAscii(argv[i], OCTAL);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



// Convert ASCII to decimal
void ascii2dec(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("ASCII: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("DEC: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertToAscii(argv[i], DECIMAL);
			}else{
				convertFromAscii(argv[i], DECIMAL);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



// Convert ASCII to hexadecimal
void ascii2hex(int argc, char **argv, char *applet)
{
	int opt = 0;

	bool reverse = false;
	bool pr_help = false;

	while((opt = getopt(argc, argv, "rh")) != -1)
	{
		switch(opt)
		{
			case 'r':
				reverse = true;
			break;

			case 'h':
				pr_help = true;
			break;
		}
	}

	if(!pr_help){
		if(reverse){
			if(argc > 2){
				printf("ASCII: ");
			}else{
				noArgument(applet);
			}
		}else{
			if(argc > 1){
				printf("HEX: ");
			}else{
				noArgument(applet);
			}
		}

		for(int i=1; i<argc; i++)
		{
			if(reverse){
				if(strcmp(argv[i], "-r") == 0){
					continue;
				}

				convertToAscii(argv[i], HEXADECIMAL);
			}else{
				convertFromAscii(argv[i], HEXADECIMAL);
			}
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}



//
//		OTHER
//

// Free conversion (Max base 36)
void ibase(int argc, char **argv, char *applet)
{
	int in_base = -1, out_base = -1;
	bool pr_help = false;

	int arg = 0;

	if(argc < 6){
		noArgument(applet);
	}

	for(arg = 1; arg < 4; arg++)
	{
		if(strcmp(argv[arg], "-i") == 0)
		{
			arg++;

			if(atoi(argv[arg]) <= MAX_BASE && atoi(argv[arg]) > 1){
				in_base = atoi(argv[arg]);
			}else{
				baseNotSupported();
			}
		}else if(strcmp(argv[arg], "-o") == 0){
			arg++;

			if(atoi(argv[arg]) <= MAX_BASE && atoi(argv[arg]) > 1){
				out_base = atoi(argv[arg]);
			}else{
				baseNotSupported();
			}
		}else if(strcmp(argv[arg], "-h") == 0){
			showUsage(applet);
			return; // return from function
		}else{
			invalidArgument(applet);
		}
	}

	if(!pr_help){
		printf("Base %d to %d, output:\x20", in_base, out_base);

		for(; arg < argc; arg++)
		{
			convertBase(argv[arg], in_base, out_base);
		}

		printf("\n");
	}else{
		showUsage(applet);
	}
}

