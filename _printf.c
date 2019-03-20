#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *_printf - Formats an argument and then prints it on the std output
 *@format: String tha contains the arguments of the functions
 *Return: String lenght without the NULL character
 */
int _printf(const char *format, ...)
{
	va_list args;
	char str[255], str2[16], *buffer, *specialchar = "0123456789.%cdefigs";
	int subreg = 0, cbuffer = 0, newl = 0, reg = 0, ch = 0, i = 0;

	va_start(args, format);
	strcpy(str, format);
	buffer = calloc(16, sizeof(char));
	if (buffer == NULL)
		{free(buffer);
		return (0); }
	while (str[i])
		{
		if (reg == 1)
			{
			while (specialchar[ch])
				{
				if (specialchar[ch] == str[i])
				subreg = 1;
				ch++;}
		        ch = 0;
			if (subreg == 0)
				{reg = 0;
				cbuffer = 0;
				strcpy(str2, buffer);
				newl += (*valformat(str2))(args); }
			else
				{*(buffer + cbuffer) = str[i];
				cbuffer++; }
			subreg = 0; }
		if (str[i] == '%' && reg == 0)
			{reg = 1;
			*(buffer + cbuffer) = str[i];
			cbuffer++; }
		if (reg == 0)
			{_putchar(str[i]);
			newl++;	}
		i++;}
	if (reg == 1)
		{reg = 0;
		cbuffer = 0;
		strcpy(str2, buffer);
		newl += (*valformat(str2))(args); }
	va_end(args);
	putchar(10);
	return (newl);
}
