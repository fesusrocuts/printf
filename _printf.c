#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "holberton.h"


int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	char str[255];
	int l = strlen(format);

	va_start(args, format);
	strcpy(str,format);
	
	/*printf("%s\n", str);*/

	/*if((*valformat(format[i]))(separator, va_arg(args, char *)) == 0)*/
	(*valformat(str))(va_arg(args, char *));
	va_end(args);
	putchar(10);
	return (0);
}

int (*valformat(char *c))(char *)
{
	int i = 0;
	typedef struct st
	{
		char *st;
		int (*f)(char *);
	} st_t;
	st_t sts[] = {
		{"%s", pt_s},
		{"%d", pt_s},
	};
	
	printf("\nBuscar: %s\n", c);
	while(i < 2)
	{
		if(strcmp(sts[i].st,c) == 0)
		{
			return (sts[i].f);
		}
		i++;
	}
	return (0);
}

int pt_s(char *data)
{
	printf("imprimir cadena\n");
	printf("%s", data);
	return (0);
}

int pt_error(char *data)
{
	printf("Error\n");
	printf("%s", data);
	return (0);
}
