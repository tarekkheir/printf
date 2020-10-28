#include "holberton.h"
/**
 *_putchar - puts caractere
 *@c: letter
 *Return: integer
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
/**
 *print_caractere - print caractere
 *@my_list: string to print
 *Return: void
 */
int print_caractere(va_list my_list)
{
	char caractere = va_arg(my_list, int);

	_putchar(caractere);
	return (1);
}
/**
 *print_string - print caractere
 *@my_list: string to print
 *Return: integer
 */
int print_string(va_list my_list)
{
	char *string = va_arg(my_list, char *);
	char *str;

	if (string == NULL)
	{
		str = "(null)";
		puts_string(str);
		return (_strlen(str));
	}
	puts_string(string);
	return (_strlen(string));
}
/**
 *print_perc - print caractere
 *@my_list: string to print
 *Return: void
 */
int print_perc(va_list my_list)
{
	(void)my_list;
	_putchar('%');
	return (1);
}
/**
 *print_decimal - print decimal
 *@my_list: decimal to sprint
 *Return: printed decimal
 */
int print_decimal(va_list my_list)
{
	int n;
	unsigned int tmp, i, result, size = 1;


	result = 0;

	n = va_arg(my_list, int);

	if (n < 0)
	{
		result = result + _putchar('-');
		tmp = -(n);
	}
	else
		tmp = n;

	i = tmp;
	while (i > 9)
	{
		i /= 10;
		size *= 10;
	}
	while (size >= 1)
	{
		result += _putchar(((tmp / size) % 10) + '0');
		size /= 10;
	}
	return (result);
}
