#include "holberton.h"
/**
 *_printf - prints the output
 *@format: character string
 *Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list my_list;
	int i = 0, fi;
	int result = 0;
	int (*func)(va_list);
	char index[8] = {'c', 's', 'd', 'i', 'u', 'S', '%', '\0'};

	va_start(my_list, format);
	if (format == NULL || (format[i] == '%' && format[i + 1] == 0))
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			fi = find_index(format[i + 1], index);
			if (fi != -1)
			{
				func = find_function(format[i + 1]);
				result += func(my_list);
				i++;
			}
			else
			{
				result += 2;
				_putchar(format[i]);
				_putchar(format[i + 1]);
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			result++;
		}
		i++;
	}
	va_end(my_list);
	return (result);
}
