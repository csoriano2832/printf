#include "holberton.h"

/**
 * print_char - prints a character
 * @ap: argument
 *
 * Return: count of number printed
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
 * Return: count of number printed
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
