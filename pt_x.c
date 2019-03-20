#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *pt_x - Converts the argument into an Unsigned hexadecimal integer
 *@args: Argument received through the main function
 *Return: Always success - 0
 */
int pt_x(va_list args)
{
	int n = va_arg(args, int);

	printf("%x", n);
	return (1);
}
