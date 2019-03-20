#include <stdio.h>
#include <string.h>
/**
 * _strlen - length of string
 * @s: string value
 *
 * Return: unsigned int
 */
unsigned int _strlen(char *s)
{
	unsigned int x;

	while (s[x] != '\0')
		x++;
	return (x);
}
