#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - function that produces output according to a format
 * @format: type of format
 * Return : len of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i, j;
	unsigned int len = 0;

	print_f ls[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_decimal},
		{"i", print_integer},
		{NULL, NULL}
	};

	va_start(ap, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (0);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;
			while (ls[j].func != NULL)
			{
				if (format[i + 1] == ls[j].print[0])
				{
					len = len + ls[j].func(ap);
					i++;
				}
				j++;
			}
		}

		else if (format[i] == '%' && format[i + 1] == '%')
		{
				_putchar('%');
				i++;
				len = len + 1;
		}
		else
		{
				_putchar(format[i]);
					 len = len + 1;
		}
		i++;
	}
	va_end(ap);
	return (len);
}
