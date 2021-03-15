#include "holberton.h"

/**
 * _printf - function to print
 * @format: string to print
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int num_of_chars = 0;

	if (format == NULL)
		return (-1);

	if (ap == NULL)
		return (-1);

	va_start(ap, format);

	num_of_chars = conv_spec(format, ap);

	va_end(ap);
	return (num_of_chars);
}
