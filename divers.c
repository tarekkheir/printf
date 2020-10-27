#include "holberton.h"

/**
 *_strlen - length of pointer
 *@s: letter
 *Return: integer
 */
int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;
	return (size);
}
/**
 *find_index - find the index
 *@str: string
 *@index: caractere
 *Return: integer
 */
int find_index(char str, const char *index)
{
	int i = 0;

	while (index[i])
	{
		if (index[i] == str)
			return (i);
		i++;
	}
	return (-1);
}
/**
 *find_function - find the good function
 *@s: caractere
 *Return: integer
 */
int (*find_function(const char s))(va_list)
{
	int i = 0;

	find_t f[] = {
		{'c', print_caractere},
		{'s', print_string},
		{'%', print_perc},
		{'d', print_decimal},
		{'i', print_integer},
		{'\0', NULL}
	};

	while (f[i].t)
	{
		if (f[i].t == s)
		{
			return (f[i].f);
		}
		i++;
		}
	return (NULL);
}
/**
 *print_integer - print integer
 *@my_list: integer to sprint
 *Return: printed integer
 */
int print_integer(va_list my_list)
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
