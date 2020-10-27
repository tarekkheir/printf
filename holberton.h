#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct find_type - type structure
 * @t: pointer to the argument
 * @f: pointer-function associated with the argument
 */
typedef struct find_type
{
	char t;
	int (*f)(va_list);

} find_t;

int _printf(const char *format, ...);
int find_index(char str, const char *index);
int _strlen(char *s);
int print_caractere(va_list my_list);
int print_string(va_list my_list);
int _putchar(char c);
int (*find_function(const char s))(va_list);
int print_perc(va_list my_list);
int print_decimal(va_list my_list);
int print_integer(va_list my_list);

#endif
