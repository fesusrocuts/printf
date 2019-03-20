#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"
int (*valformat(char *c))(va_list)
{
	int i = 0;
	typedef struct st
	{
		char *st;
		int (*f)(va_list);
	} st_t;
	st_t sts[] = {
		{"%s", pt_s},
		{"%d", pt_d},
		{"%c", pt_c},
		{"%d", pt_d},
		{"%i", pt_i}
	};

	/*printf("\nBuscar: %s\n", c);*/
	while(i < 6)
	{
		if(strcmp(sts[i].st,c) == 0)
		{
			return (sts[i].f);
		}
		i++;
	}
	return (0);
}
