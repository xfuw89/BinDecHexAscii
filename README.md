BinDecHexAscii
==============

   BinDecHexAscii is a multi-call program that converts the argument from standard input to the specified numbering system or character set (ASCII) and prints the result on the screen. That way you can perform the conversion between ASCII, binary, octal, decimal, hexadecimal. Program can also convert between bases 2-36.

### How to build:
	$ ./configure
	$ make
	$ make install

### Usage

  You cannot call bindechexascii directly, but can use symlinks to applets.

  All applets:
      ibase, ascii2bin, ascii2oct, ascii2dec, ascii2hex, bin2ascii, bin2oct, bin2dec, 
    bin2hex, oct2ascii, oct2bin, oct2dec, oct2hex, dec2ascii, dec2bin, dec2oct, dec2hex, 
    hex2ascii, hex2bin, hex2oct, hex2dec.

  Any applet except ibase has the following usage:

    applet_name [-h|-r] arg1 arg2 arg3 ...
      -h     Prints this help for applet and exit
      -r     Reverse conversion

  Usage for ibase applet:

    ibase [-h] [-i In base] [-o Out base] arg1 arg2 arg3 ...
      -h     Prints this help and exit
      -i     Base of input values (Required !)
      -o     Base of output values (Required !)

### Examples

  1. To convert 1C9F from hexadecimal to decimal, type in console:

       hex2dec 1C9F

  2. To convert ABCD from ASCII to octal:

       ascii2oct ABCD

  3. To convert 73813 from base 10 to base 25:

       ibase -i 10 -o 25 73813

  Output in terminal will be:

       1. DEC: 7327
       2. OCT: 101 102 103 104
       3. Base 10 to 25, output: 4I2D

