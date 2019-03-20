#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *pt_i - Converts the argument into an integer
 *@args: Argument received through the main function
 *Return: Always success - 0
 */
int pt_i(va_list args)
{
	int i = 0;
	int n = va_arg(args, int);

	print_number(n);
	return (i);
}
