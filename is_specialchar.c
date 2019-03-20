#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * is_specialchar - fn return if exists specialchar
 * @c: pointer format
 * Return: 1 or 0
 */
int is_specialchar(char c)
{
	/*char *specialchar = "0123456789.%cdefigs";*/
	char *specialchar = "%cdis";
	int ch = 0;

	while (specialchar[ch])
	{
		if (specialchar[ch] == c)
			return (1);
		ch++;
	}
	return (0);
}

