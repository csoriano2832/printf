#include "holberton.h"

/**
 * print_char - prints a character
 * @ap: argument
 *
 * Return: number of characters printed
 */
int print_char(va_list ap)
{
	int count = 0;
	unsigned char c = va_arg(ap, int);

	_putchar(c);
	count++;

	return (count);
}

/**
 * print_string - prints a string
 * @ap: argument
 *
 * Return: number of characters printed
 */
int print_string(va_list ap)
{
	int i, count = 0;
	char *string = va_arg(ap, const char *);

	if (string)
	{
		for (i = 0; string[i] != '\0'; i++)
		{
			_putchar(string[i]);
			count++;
		}
	}

	return (count);
}

/**
 * print_percent - prints a %
 *
 * Return: number of characters printed
 */
int print_percent(va_list ap)
{
	int count = 0;
	(void) ap;

	_putchar('%');
	count++;

	return (count);
}
