#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_decimal - print decimal
 *@ap: decimal to sprint
 *Return: printed decimal
 */
int print_decimal(va_list ap)
{
	int n = va_arg(ap, int);
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

/**
 *print_integer - print integer
 *@ap: integer to sprint
 *Return: printed integer
 */
int print_integer(va_list ap)
{
	int n = va_arg(ap, int);
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
