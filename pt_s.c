#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"

int pt_s(va_list args)
{
	int i = 0;
	char *data = va_arg(args, char *);
	
	while (data[i] != '\0')
	{
		_putchar(data[i]);
		i++;
	}
	return (i);
}
