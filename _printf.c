#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list my_list;
	int i = 0, fi;
	int result = 0;
	int (*func)(va_list);
	char index[6] = {'c', 's', 'd', 'i', '%', '\0'};

	va_start(my_list, format);

	while (format[i])
	{
		if (i != 0 && format[i] == '%' && format[i - 1] != '%')
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

				_putchar(format[i]);
				_putchar(format[i + 1]);
				result += 2;
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
