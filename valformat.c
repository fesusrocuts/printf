#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *valformat - Pointer to the function needed according to the C Specificator
 *@c: Argument that iterates on the structure, to find the function
 *Return: Pointer to a converter function
 */
int (*valformat(char *c))(va_list)
{
	int i = 0;

	st_t sts[] = {
		{"%s", pt_s},
		{"%d", pt_d},
		{"%c", pt_c},
		{"%d", pt_d},
		{"%i", pt_i}
		};
	while (i < 6)
	{
		if (strcmp(sts[i].st, c) == 0)
		{
			return (sts[i].f);
		}
		i++;
	}
	return (0);
}
