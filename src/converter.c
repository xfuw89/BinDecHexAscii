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

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "converter.h"
#include "num_check.h"

void bin2oct(char *input)
{
	unsigned long val = 0;
	char tmp;

	for(int i=0; i<strlen(input); i++)
	{
		sscanf(&input[i], "%c", &tmp);

		if(!is_bin(tmp)){
			printf("Invalid binary input !\n");
			exit(1);
		}

		val = val * 2 + atol(&tmp);
	}

	printf("%lo\x20", val);
}

void bin2dec(char *input)
{
	unsigned long val = 0;
	char tmp;

	for(int i=0; i<strlen(input); i++)
	{
		sscanf(&input[i], "%c", &tmp);

		if(!is_bin(tmp)){
			printf("Invalid binary input !\n");
			exit(1);
		}

		val = val * 2 + atol(&tmp);
	}

	printf("%ld\x20", val);
}

void bin2hex(char *input)
{
	unsigned long val = 0;
	char tmp;

	for(int i=0; i<strlen(input); i++)
	{
		sscanf(&input[i], "%c", &tmp);

		if(!is_bin(tmp)){
			printf("Invalid binary input !\n");
			exit(1);
		}

		val = val * 2 + atol(&tmp);
	}

	printf("%lx\x20", val);
}

void bin2ascii(char *input)
{
	unsigned long val = 0;
	char tmp;

	for(int i=0; i<strlen(input); i++)
	{
		sscanf(&input[i], "%c", &tmp);

		if(!is_bin(tmp)){
			printf("Invalid binary input !\n");
			exit(1);
		}

		val = val * 2 + atol(&tmp);
	}

	printf("%c\x20", val);
}

void oct2bin(char *input)
{
	unsigned long tmp = 0;
	int bin[512];
	int k=1;

	if(!is_oct(input[0])){
		printf("Invalid octal input !\n");
		exit(1);
	}

	sscanf(input, "%lo", &tmp);

	while(tmp != 0)
	{
		bin[k++] = tmp % 2;
		tmp = tmp / 2;
	}

	for(int a=k-1; a>0; a--)
	{
		printf("%d", bin[a]);
	}

	printf("\x20");
}

void oct2dec(char *input)
{
	long tmp;

	if(!is_oct(input[0])){
		printf("Invalid octal input !\n");
		exit(1);
	}

	sscanf(input, "%lo", &tmp);
	printf("%ld\x20", tmp);
}

void oct2hex(char *input)
{
	long tmp;

	if(!is_oct(input[0])){
		printf("Invalid octal input !\n");
		exit(1);
	}

	sscanf(input, "%lo", &tmp);
	printf("%lx\x20", tmp);
}

void oct2ascii(char *input)
{
	long tmp;

	if(!is_oct(input[0])){
		printf("Invalid octal input !\n");
		exit(1);
	}

	sscanf(input, "%ld", &tmp);
	printf("%lo\x20", tmp);
}

void dec2bin(char *input)
{
	unsigned long tmp = 0;
	int bin[512];
	int k=1;

	sscanf(input, "%ld", &tmp);

	while(tmp != 0)
	{
		bin[k++] = tmp % 2;
		tmp = tmp / 2;
	}

	for(int a=k-1; a>0; a--)
	{
		printf("%d", bin[a]);
	}

	printf("\x20");
}

void dec2oct(char *input)
{
	long tmp;

	sscanf(input, "%ld", &tmp);
	printf("%lo\x20", tmp);
}

void dec2hex(char *input)
{
	long tmp;

	sscanf(input, "%ld", &tmp);
	printf("%lx\x20", tmp);
}

void dec2ascii(char *input)
{
	long tmp;

	sscanf(input, "%ld", &tmp);
	printf("%c\x20", tmp);
}

void hex2bin(char *input)
{
	char bin[512] = {0}, hex[256] = {0};
	long int l = 0;

	sscanf(input, "%s", hex);

	while(hex[l])
	{
		switch(hex[l])
		{
			case '0': printf("0000"); break;
			case '1': printf("0001"); break;
			case '2': printf("0010"); break;
			case '3': printf("0011"); break;
			case '4': printf("0100"); break;
			case '5': printf("0101"); break;
			case '6': printf("0110"); break;
			case '7': printf("0111"); break;
			case '8': printf("1000"); break;
			case '9': printf("1001"); break;
			case 'A': printf("1010"); break;
			case 'B': printf("1011"); break;
			case 'C': printf("1100"); break;
			case 'D': printf("1101"); break;
			case 'E': printf("1110"); break;
			case 'F': printf("1111"); break;
			case 'a': printf("1010"); break;
			case 'b': printf("1011"); break;
			case 'c': printf("1100"); break;
			case 'd': printf("1101"); break;
			case 'e': printf("1110"); break;
			case 'f': printf("1111"); break;

			default:  printf("\nInvalid hexadecimal digit %c\n", hex[l]); exit(1);
		}

		l++;
	}

	printf("\x20");
}

void hex2oct(char *input)
{
	long tmp;

	sscanf(input, "%lx", &tmp);
	printf("%lo\x20", tmp);
}

void hex2dec(char *input)
{
	long tmp;

	sscanf(input, "%lx", &tmp);
	printf("%ld\x20", tmp);
}

void hex2ascii(char *input)
{
	long tmp;

	sscanf(input, "%lx", &tmp);
	printf("%c", tmp);
}

void ascii2bin(char *input)
{
	for(int i=0; i<strlen(input); i++)
	{
		for(int t = 128; t > 0; t = t/2)
		{
			if(input[i] & t){
				printf("1");;
			} else {
				printf("0");
			}
		}

		printf("\x20");
	}
}

void ascii2oct(char *input)
{
	for(int i=0; i<strlen(input); i++)
	{
		printf("%o\x20", input[i]);
	}
}

void ascii2dec(char *input)
{
	for(int i=0; i<strlen(input); i++)
	{
		printf("%d\x20", input[i]);
	}
}

void ascii2hex(char *input)
{
	for(int i=0; i<strlen(input); i++)
	{
		printf("%x\x20", input[i]);
	}
}

