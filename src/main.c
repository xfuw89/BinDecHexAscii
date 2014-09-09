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

#include "converter.h"
#include "num_check.h"

#define VERSION "0.3a"
#define AUTHOR  "xfuw89 <leonid.x212@gmail.com>"
#define LICENSE "GNU GPL v3"


void print_usage()
{
	puts("\nUsage: bindechexascii [mode] arg1 arg2 arg3 ...\n");
	puts("Options:");
	puts("\x20--b2d     Binary to decimal");
	puts("\x20--b2h     Binary to hexadecimal");
	puts("\x20--b2a     Binary to ASCII\n");
	puts("\x20--d2b     Decimal to binary");
	puts("\x20--d2h     Decimal to hexadecimal");
	puts("\x20--d2a     Decimal to ASCII\n");
	puts("\x20--h2b     Hexadecimal to binary");
	puts("\x20--h2d     Hexadecimal to decimal");
	puts("\x20--h2a     Hexadecimal to ASCII\n");
	puts("\x20--a2b     ASCII to binary");
	puts("\x20--a2d     ASCII to decimal");
	puts("\x20--a2h     ASCII to hexadecimal\n");
	puts("\x20-h --help    Print this help");
	puts("\x20-i --info    Print information about program\n");
}

void print_info()
{
	printf("\nVersion: %s %s\n", VERSION, __DATE__);
	printf("Author: %s \n", AUTHOR);
	printf("License: %s \n\n", LICENSE);
}


int main(int argc, char **argv)
{
	if(argc > 1)
	{
		for(int i=1; i<argc; i++)
		{
			if(strcmp(argv[i], "--b2d") == 0)
			{
				printf("Decimal out:\x20");

				while(i+1 < argc)
				{
					i++;
					bin2dec(argv[i]);
				}

				printf("\n");

				break;
			}
			else if(strcmp(argv[i], "--b2h") == 0)
			{
				printf("Hexadecimal out:\x20");

				while(i+1 < argc)
				{
					i++;
					bin2hex(argv[i]);
				}

				printf("\n");

				break;
			}
			else if(strcmp(argv[i], "--b2a") == 0)
			{
				printf("ASCII out:\x20");

				while(i+1 < argc)
				{
					i++;
					bin2ascii(argv[i]);
				}

				printf("\n");

				break;
			}
			else if(strcmp(argv[i], "--d2b") == 0)
			{
				printf("Binary out:\x20");

				while(i+1 < argc)
				{
					i++;
					dec2bin(argv[i]);
				}

				printf("\n");

				break;
			}
			else if(strcmp(argv[i], "--d2h") == 0)
			{
				printf("Hexadecimal out:\x20");

				while(i+1 < argc)
				{
					i++;
					dec2hex(argv[i]);
				}

				printf("\n");

				break;
			}
			else if(strcmp(argv[i], "--d2a") == 0)
			{
				printf("ASCII out:\x20");

				while(i+1 < argc)
				{
					i++;
					dec2ascii(argv[i]);
				}

				printf("\n");

				break;
			}
			else if(strcmp(argv[i], "--h2b") == 0)
			{
				printf("Binary out:\x20");

				while(i+1 < argc)
				{
					i++;
					hex2bin(argv[i]);
				}

				printf("\n");
			}
			else if(strcmp(argv[i], "--h2d") == 0)
			{
				printf("Decimal out:\x20");

				while(i+1 < argc)
				{
					i++;
					hex2dec(argv[i]);
				}

				printf("\n");

				break;
			}
			else if(strcmp(argv[i], "--h2a") == 0)
			{
				long int buff;

				printf("ASCII out:\x20");

				while(i+1 < argc)
				{
					i++;
					hex2ascii(argv[i]);
				}

				printf("\n");

				break;
			}
			else if(strcmp(argv[i], "--a2b") == 0)
			{
				printf("Binary out:\x20");

				while(i+1 < argc)
				{
					i++;
					ascii2bin(argv[i]);
				}

				printf("\n");
			}
			else if(strcmp(argv[i], "--a2d") == 0)
			{
				printf("Decimal out:\x20");

				while(i+1 < argc)
				{
					i++;
					ascii2dec(argv[i]);
				}

				printf("\n");
			}
			else if(strcmp(argv[i], "--a2h") == 0)
			{
				printf("Hexadecimal out:\x20");

				while(i+1 < argc)
				{
					i++;
					ascii2hex(argv[i]);
				}

				printf("\n");
			}
			else if(strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0)
			{
				print_usage();
			}
			else if(strcmp(argv[i], "-i") == 0 || strcmp(argv[i], "--info") == 0)
			{
				print_info();
			}
			else
			{
				printf("Invalid argument !\n");
				print_usage();

				return 1;
			}

		}
	}
	else
	{
		printf("Error !\n");
		print_usage();

		return 1;
	}

	return 0;
}

