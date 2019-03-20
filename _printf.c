#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"


int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	char str[255];
	char str2[16];
	char *buffer;
	int cbuffer = 0;
	int newl = 0;
	int reg = 0;
	char *specialchar = "0123456789.%cdefigs";
	int ch = 0;
	int subreg = 0;
	/*using before backslahes to reg special char*/
	/*char *specialchar2 = "a\br\"ftn0'v?";*/
	/*the . should can strong parse*/

	va_start(args, format);
	strcpy(str,format);
	
	buffer = calloc(16, sizeof(char));
	if(buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	while (str[i])
	{
		if(reg == 1)
		{
			while(specialchar[ch])
			{
				if(specialchar[ch] == str[i])
					subreg = 1;
				ch++;
			}
			ch = 0;
			if (subreg == 0)
			{
				reg = 0;
				cbuffer = 0;
				strcpy(str2, buffer);
				/*printf("\find: %s\n", str2);*/
				/*here is the magic*/
				newl+=(*valformat(str2))(args);
			}
			else
			{
				/*printf("\nadd to buffer: %c\n", str[i]);*/
				*(buffer + cbuffer) = str[i];
				cbuffer++;
			}
			subreg = 0;
		}
		if (str[i] == '%' && reg == 0)
		{
			reg = 1;
			*(buffer + cbuffer) = str[i];
			cbuffer++;
		}
		if(reg == 0)
		{
			_putchar(str[i]);
			newl++;
		}
		i++;
	}
	/*print end buffer when end text with reg==1*/
	if (reg == 1)
	{
		reg = 0;
		cbuffer = 0;
		strcpy(str2, buffer);
		/*printf("\nfind: %s\n", str2);*/
		/*here is the magic*/
		newl+=(*valformat(str2))(args);
	}
	va_end(args);
	putchar(10);
	return (newl);
}
