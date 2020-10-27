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
 *Return: void
 */
int print_string(va_list my_list)
{
	char *string = va_arg(my_list, char *);
	int i = 0;

	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
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
	int n = va_arg(my_list, int);
	int num;
	int res = n % 10;
	int digit;
	int base = 1;
	int i = 1;

	n /= 10;
	num = n;

	if (res < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		res = -res;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			base = base * 10;
			num = num / 10;
		}
		num = n;
		while (base > 0)
		{
			digit = num / base;
			_putchar(digit + '0');
			num = num - (digit * base);
			base = base / 10;
			i++;
		}
	}
	_putchar(res + '0');
	return (i);
}
