#ifndef _FUNCTION_PRINTF_H_
#define _FUNCTION_PRINTF_H_
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *struct print - multiple choice print
 *@print: char type of print
 *@func: function to be in struc
 */
typedef struct print
{
	char *print;
	int (*func)(va_list);
} print_f;

int _printf(const char *format, ...);
int _putchar(char c);

int print_char(va_list ap);
int print_string(va_list ap);
int print_decimal(va_list ap);
int print_integer(va_list ap);

#endif
