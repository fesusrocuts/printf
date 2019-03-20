#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * cp - copy the pointer a to b
 * @b: pointer dest
 * @a: pointer origin
 * Return: void
 */
void cp(char *b, const char *a)
{
	int i = 0;
	int i2 = 0;

	while (b[i])
	{
		b[i] = '\0';
		i++;
	}

	while (*(a + i2) != '\0')
	{
		*(b + i2) = *(a + i2);
		i2++;
	}
}
