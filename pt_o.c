#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *pt_o - Converts the argument into a signed octal
 *@args: Argument received through the main function
 *Return: Always success - 0
 */
int pt_o(va_list args)
{
	int n = va_arg(args, int);

	printf("%o", n);
	return (1);
}
