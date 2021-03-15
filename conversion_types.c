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
	unsigned char c;

	if (ap == NULL)
		return (-1);

	c = va_arg(ap, int);

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
	char *string;

	if (ap == NULL)
		return (-1);

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

/**
 * print_percent - prints a %
 * @ap: argument
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

/**
 * print_rot13 - takes a string and tranforms it using rot13 encryption
 * @ap: argument
 *
 * Return: number of characters printed
 */
int print_rot13(va_list ap)
{
	int i, j, count = 0;
	char *string;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (ap == NULL)
		return (-1);

	string = va_arg(ap, char *);

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; arr1[j] != '\0'; j++)
		{
			if (string[i] == arr1[j])
			{
				_putchar(arr2[j]);
				count++;
				break;
			}
		}

		if (arr1[j] == '\0')
			_putchar(string[i]);
	}
	return (count);
}
