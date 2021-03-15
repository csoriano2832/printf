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

	_putchar(va_arg(ap, int));
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
	char *string;

	string = va_arg(ap, char *);

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
