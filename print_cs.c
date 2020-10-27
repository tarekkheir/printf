#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_char - print character c
 * @ap: character to print
 * Return: printed character
 */
int print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);
	return (1);
}

/**
 *print_string - print string
 * @ap: string to print
 * Return: printed sum character
 */
int print_string(va_list ap)
{
	unsigned int i;
	char *s;

	s = va_arg(ap, char *);
	i = 0;
	if (s == NULL)
		s = "(NULL)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
