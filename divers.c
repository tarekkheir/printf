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
		{'i', print_decimal},
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
