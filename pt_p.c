#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *pt_p - Converts the argument to Pointer address
 *@args: Argument received through the main function
 *Return: Always success - 0
 */
int pt_p(va_list args)
{
	printf("%p", va_arg(args, void *));
	return (1);
}
