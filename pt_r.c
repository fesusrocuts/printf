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
	int i, j;
	char *data = va_arg(args, char *);

	for (i = 0; *data != '\0'; i++)
	{
		data++;
	}

	for (j = i; j > 0; j--)
	{
		data--;
		_putchar(*data);
	}

	/*while (*(data + i))
	{
		i++;
	}

	while (i--)
	{
		_putchar(*(data + i));
		}*/
	return (i);
}
