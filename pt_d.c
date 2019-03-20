#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *pt_d - Converts the argument into digits.
 *@args: Argument received through the main function
 *Return: Always success (0)
 */
int pt_d(va_list args)
{
	int n = va_arg(args, int);

	return (print_number(n));
}
