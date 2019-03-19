#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: get number to process the integer
 * Return: void
 */
void print_number(int n)
{
	int div = 0;
	int r = 0;
	int ln = 0;
	int fixInt = n == INT_MIN ? 1 : 0;
	int n0 = n == INT_MIN ? INT_MAX * -1 : n;
	int flagNeg = n < 0 ? 1 : 0;
	int n1 = n0 < 0 ? n0 * -1 : n0; /*take the long, is use to count each digit*/
	int n2 = n1; /*get the first digit of left and subtract the digit*/

	do {
		n2 = n2 / 10;
		ln++;
	} while (n2 > 0);

	if (flagNeg == 1)
		_putchar('-');
	do {
		if (ln > 1)
		{
			div = _pow(10, ln - 1);/*10 ^ 2 == 100, the exp working long - 1*/
			r = n1 > 9 ? n1 / div : 0;
			n1 -= r * div;
			_putchar(r + '0');
		}
		else
		{
			_putchar((n1 + fixInt) + '0');
		}
		ln--;
	} while (ln > 0);
}
