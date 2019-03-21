#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * pf - fn return long the line using args
 * @s: pointer format
 * @args: args list
 * Return: integer value
 */
int pf(char *s, va_list args)
{
	int i = 0, iss = 0, nfilter = 0, nl = 0;
	char *filter;

	filter = malloc(sizeof(char) * 16);
	if (filter == NULL)
		free(filter);

	while (s[i] != '\0')
	{
		if (s[i] == '%' && iss == 1 && strlen(filter) == 1)
		{iss = 0;
			nfilter = 0; }
		else if (s[i] == '%' && iss == 0)
		{iss = 1;
			nfilter = 0; }
		else if ((is_specialchar(s[i]) == 0 || _strlen(filter) == 2) && iss == 1)
		{
			nfilter = 0;
			iss = 0;
			nl += (*valformat(filter))(args);

			if (filter != NULL)
			{free(filter);
				filter = malloc(sizeof(char) * 16); }
		}
		if (iss == 0)
		{_putchar(s[i]);
			nl++; }
		if (iss == 1)
		{filter[nfilter] = s[i];
			nfilter++; }
		i++;
	}
	if (iss == 1)
	{nl += (*valformat(filter))(args); }
	free(filter);
	return (nl);
}
