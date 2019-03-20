#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *pt_c - Function that converts arguments to a char
 *@args: Argument received
 *Return: 1
 */
int pt_c(va_list args)
{
	int data = va_arg(args, int);

	_putchar(data);
	return (1);
}
