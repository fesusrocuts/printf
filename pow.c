#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _pow - return the result the multiply base ^ exponent
 * @base: get number the base that is integer
 * @exp: get number the exp that repeat the base n times
 * Return: integer
 */
int _pow(int base, int exp)
{
	int x = base;
	int y = exp;

	while (y > 1)
	{
		x *= base;
		y--;
	}
	return (x);
}
