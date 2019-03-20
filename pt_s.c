#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *pt_s - Function that converts the argument into a string
 *@args: Argument received
 *Return: Always success (0)
 */
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
