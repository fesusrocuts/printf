#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *pt_u - Converts the argument into an unsigned decimal integer
 *@args: Argument received through the main function
 *Return: Always success - 0
 */
int pt_u(va_list args)
{
	int n = va_arg(args, int);

	printf("%u", n);
	return (1);
}
