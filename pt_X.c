#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *pt_X - Converts into an Unsigned hexadecimal integer (capital letters)
 *@args: Argument received through the main function
 *Return: Always success - 0
 */
int pt_X(va_list args)
{
	int n = va_arg(args, int);

	printf("%X", n);
	return (1);
}
