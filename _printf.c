#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"

int pf(char *, va_list);
int is_specialchar(char);

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

	va_start(args, format);
	strcpy(bkformat, format);
	totallines = pf(bkformat, args);
	va_end(args);
	_putchar(10);
	return (totallines);
}

/**
 * pf - fn return long the line using args
 * @s: pointer format
 * @args: args list
 * Return: integer value
 */
int pf(char *s, va_list args)
{
	int i = 0;
	int iss = 0;
	char *filter;
	int nfilter = 0;
	int nl = 0;

	filter = malloc(sizeof(char) * 16);
	if (filter == NULL)
		free(filter);

	while (s[i])
	{
		if (s[i] == '%' && iss == 0)
		{
			iss = 1;
			nfilter = 0;
		}
		if (is_specialchar(s[i]) == 0  && iss == 1)
		{
			nfilter = 0;
			iss = 0;
			/*printf("\nlookin for filter: %s\n", filter);*/
			nl += (*valformat(filter))(args);
			/*printf("\nback long for filter: %d\n", nl);*/
		}
		if (iss == 0)
		{
			_putchar(s[i]);
			nl++;
		}
		if (iss == 1)
		{
			filter[nfilter] = s[i];
			nfilter++;
		}
		i++;
	}
	if (iss == 1)
	{
		/*printf("\nlookin for filter2: %s\n", filter);*/
		nl += (*valformat(filter))(args);
		/*printf("\nback long for filter: %d\n", nl);*/
	}
	return (nl);
}

/**
 * is_specialchar - fn return if exists specialchar
 * @c: pointer format
 * Return: 1 or 0
 */
int is_specialchar(char c)
{
	char *specialchar = "0123456789.%cdefigs";
	int ch = 0;

	while (specialchar[ch])
	{
		if (specialchar[ch] == c)
			return (1);
		ch++;
	}
	return (0);
}
