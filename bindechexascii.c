/*
*  Simple ASCII / BIN / DEC / HEX converter
*  Copyright Leonid Plyushch © 2014 <leonid.x212@gmail.com>
*
*  This program is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  This program is distributed in the hope that it will be useful,
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

#define VERSION "0.02"
#define AUTHOR "xfuw89 <leonid.x212@gmail.com>"
#define LICENSE "GNU GPL v3"

void print_usage()
{
	puts("\nUsage: conv [mode] arg1 arg2 arg3 ...\n");
	puts("Convert:");
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
	puts("Other:");
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
	int i;

	if(argc > 1)
	{
		for(i=1; i<argc; i++)
		{
			// Binary to Decimal
			if(strcmp(argv[i], "--b2d") == 0)
			{
				printf("Binary to Decimal:\x20");

				while(i+1 < argc)
				{
					long int bin=0, dec=0, j=1;

					sscanf(argv[++i], "%ld", &bin);

					while(bin != 0)
					{
						dec += (bin%10) * j;
						j = j * 2;
						bin = bin / 10;
					}

					printf("%ld\x20", dec);
				}

				printf("\n");

				break;
			}
			// Binary to Hexadecimal
			else if(strcmp(argv[i], "--b2h") == 0)
			{
				printf("Binary to Hexadecimal:\x20");

				while(i+1 < argc)
				{
					long int bin=0, dec=0, j=1;

					sscanf(argv[++i], "%ld", &bin);

					while(bin != 0)
					{
						dec += (bin%10) * j;
						j = j * 2;
						bin = bin / 10;
					}

					printf("%lX\x20", dec);
				}

				printf("\n");

				break;
			}
			// Binary to ASCII
			else if(strcmp(argv[i], "--b2a") == 0)
			{
				printf("Binary to ASCII:\x20");

				while(i+1 < argc)
				{
					long int bin=0, dec=0, j=1;

					sscanf(argv[++i], "%ld", &bin);

					while(bin != 0)
					{
						dec += (bin%10) * j;
						j = j * 2;
						bin = bin / 10;
					}

					printf("%c", dec);
				}

				printf("\n");

				break;
			}
			// Decimal to Binary
			else if(strcmp(argv[i], "--d2b") == 0)
			{

				printf("Decimal to Binary:\x20");

				while(i+1 < argc)
				{

					long int dec=0, rem=0, qnt=0;
					int bin[100] = {0}, k=1, j=0;

					sscanf(argv[++i], "%ld", &dec);

					qnt = dec;

					while(qnt!=0)
					{
						bin[k++] = qnt % 2;
						qnt = qnt / 2;
					}

					for(j=k-1; j>0; j--)
						printf("%d", bin[j]);

					printf("\x20");
				}

				printf("\n");

				break;
			}
			// Decimal to Hexadecimal
			else if(strcmp(argv[i], "--d2h") == 0)
			{
				long int buff;

				printf("Decimal to Hexadecimal:\x20");

				while(i+1 < argc)
				{
					sscanf(argv[++i], "%ld", &buff);
					printf("%lX\x20", buff);
				}

				printf("\n");

				break;
			}
			// Decimal to ASCII
			else if(strcmp(argv[i], "--d2a") == 0)
			{
				long int buff;

				printf("Decimal to ASCII:\x20");

				while(i+1 < argc)
				{
					sscanf(argv[++i], "%ld", &buff);
					printf("%c", buff);
				}
				printf("\n");

				break;
			}
			// Hexadecimal to binary
			else if(strcmp(argv[i], "--h2b") == 0)
			{
				printf("Hexadecimal to Binary:\x20");

				while(i+1 < argc)
				{
					char bin[512] = {0}, hex[512] = {0};
					long int l=0;

					sscanf(argv[++i], "%s", hex);

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

							default:  printf("\nInvalid hexadecimal digit %c\n", hex[l]); return 1;
						}

						++l;
					}

					printf("\x20");
				}

				printf("\n");
			}
			// Hexadecimal to Decimal
			else if(strcmp(argv[i], "--h2d") == 0)
			{
				long int buff;

				printf("Hexadecimal to Decimal:\x20");

				while(i+1 < argc)
				{
					sscanf(argv[++i], "%lX", &buff);
					printf("%ld\x20", buff);
				}

				printf("\n");

				break;
			}
			// Hexadecimal to ASCII
			else if(strcmp(argv[i], "--h2a") == 0)
			{
				long int buff;

				printf("Hexadecimal to ASCII:\x20");

				while(i+1 < argc)
				{
					sscanf(argv[++i], "%lX", &buff);
					printf("%c", buff);
				}

				printf("\n");

				break;
			}
			// ASCII to Binary
			else if(strcmp(argv[i], "--a2b") == 0)
			{
				int t, len, k, a;
				char *in;

				printf("Binary out:\x20");

				while(i+1 < argc)
				{
					in = argv[++i];
					len = strlen(in);

					for(k=0; k<len; k++)
					{
						for(t = 128; t > 0; t = t/2)
						{
							if(in[k] & t)
							{
								printf("1");;
							}
							else
							{
								printf("0");
							}
						}

						printf("\x20");
					}

				}

				printf("\n");
			}
			// ASCII to Decimal
			else if(strcmp(argv[i], "--a2d") == 0)
			{
				char buff[16];
				int l, len=0;

				printf("ASCII to Decimal:\x20");

				while(i+1 < argc)
				{
					sscanf(argv[++i], "%s", buff);

					len = strlen(buff);

					for(l=0; l<len; l++)
						printf("%d\x20", buff[l]);
				}

				printf("\n");
			}
			// ASCII to Hexadecimal
			else if(strcmp(argv[i], "--a2h") == 0)
			{
				char buff[16];
				int l, len=0;

				printf("ASCII to Decimal:\x20");

				while(i+1 < argc)
				{
					sscanf(argv[++i], "%s", buff);

					len = strlen(buff);

					for(l=0; l<len; l++)
						printf("%X\x20", buff[l]);
				}

				printf("\n");
			}
			else if(strcmp(argv[i], "--help") == 0 || strcmp(argv[i], "-h") == 0)
			{
				print_usage();
			}
			else if(strcmp(argv[i], "--info") == 0 || strcmp(argv[i], "-i") == 0)
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
