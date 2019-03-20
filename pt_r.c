#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *pt_r - Function that converts the argument into a reverse an string
 *@args: Argument received
 *Return: Always success (0)
 */
int pt_r(va_list args)
{
	int i = 0;
	char *data = va_arg(args, char *);

	while (data[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		_putchar(data[i]);
		i--;
	}
	return (i);
}
