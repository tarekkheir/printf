#include "holberton.h"
/**
 *puts_string - print caractere
 *@string: string to print
 *Return: integer
 */
int puts_string(char *string)
{
	int i = 0;

	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}
	return (_strlen(string));
}
/**
 *print_S - print string
 *@my_list: string
 *Return: integer
 */
int print_S(va_list my_list)
{
	char *string = va_arg(my_list, char *);
	char *str = malloc(_strlen(string));
	int i = 0;

	if (string == NULL)
	{
		str = "(null)";
		puts_string(str);
		return (_strlen(str));
	}
	while (string[i])
	{
		if (string[i] != '\\' && string[i + 1] == 0)
			str[i] = string[i];

		else if (string[i] == '\\' && string[i + 1] != 0)
		{
			str[i] = string[i];
			str[i + 1] = 'x';
			i++;
		}
		else
		{
			str[i] = string[i];
			i++;
		}
	}
	return (puts_string(str));
}
/**
 *puts_number - print numbers
 *@n: number
 *Return: integer
 */
int puts_number(int n)
{
	int tmp, i, result, size = 1;

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
/**
 *print_binary - convert decimal number into binary
 *@my_list: list argument
 *Return: integer
 */
int print_binary(va_list my_list)
{
	long int nb = va_arg(my_list, int);
	int rest, result, ret, tmp = 1;

	result = 0;
	while (nb)
	{
		rest = nb % 2;
		nb = nb / 2;
		result = result + (rest * tmp);
		tmp = tmp * 10;
		ret++;
	}
	printf("result : %d\n", result);
	puts_number(result);
	return (ret);
}
