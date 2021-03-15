#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * struct conversion - a struct which associates characters to functions
 * @specifier: a specific character
 * @f: a pointer to the function associated to specifier
 *
 */
typedef struct conversion
{
	char specifier;
	int (*f)(va_list args);
} conv_t;

int _putchar(char c);
int _printf(const char *format, ...);
int conv_spec(const char *format, va_list ap);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);
int print_rot13(va_list ap);
int print_digits(va_list ap);
int print_int(int n);
int print_unsig(va_list ap);
int print_binary(va_list ap);
int print_octal(va_list ap);
int recur_unsig(unsigned int n);
int recur_binary(unsigned int n);
int recur_octal(unsigned int n);
int valid_conversion(char c);
int function_call(char c, va_list ap);

#endif
