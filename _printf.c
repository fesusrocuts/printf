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
	char bkformat[1024];
	int totallines = 0;

	if (format == NULL)
		format = "(null)";

	va_start(args, format);
	cp(bkformat, format);
	checknull(bkformat);
	totallines = pf(bkformat, args);
	va_end(args);
	return (totallines);
}
/**
 * checknull - copy in pointer null the value (null)
 * @s: pointer char
 * Return: void
 */
void checknull(char *s)
{
	char *null = "(null)";

	if (s == NULL)
		cp(s, null);
}
