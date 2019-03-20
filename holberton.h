#ifndef _HOLBERTON_H
#define _HOLBERTON_H
int _putchar(char c);
int _pow(int base, int exp);
void print_number(int n);
int _printf(const char *format, ...);

/**
 *struct st - Contains the prototyped functions to the conversion spec
 *@st: Argument received
 *@f: Pointer to the associated function
 */
typedef struct st
{
	char *st;
	int (*f)(va_list);
} st_t;
int (*valformat(char *))(va_list);
int pt_s(va_list);
int pt_c(va_list);
int pt_d(va_list);
int pt_i(va_list);
int pt_r(va_list);

#endif
