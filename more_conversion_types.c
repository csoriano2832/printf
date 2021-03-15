#include "holberton.h"

/**
  * print_digits - prints an integer
  * @ap: argument
  *
  * Return: count of numbers printed
  */

int print_digits(va_list ap)
{
	int num = 0, count = 0;

	num = va_arg(ap, int);
	count += print_int(num);

	return (count);
}

/**
 * print_unsig - printes unsigned interger
 * @ap: argument
 *
 * Return: count for numbers printed
 */

int print_unsig(va_list ap)
{
	unsigned int num = 0;
	int count = 0;

	num = va_arg(ap, unsigned int);
	count += recur_unsig(num);

	return (count);
}

/**
 * print_binary - prints binary numbers
 * @ap: arguments
 *
 * Return: count for numbers printed
 */

int print_binary(va_list ap)
{
	unsigned int num = 0;
	int count = 0;

	num = va_arg(ap, unsigned int);
	count += recur_binary(num);

	return (count);
}

/**
 * print_octal - prints octal numbers
 * @ap: argument
 *
 * Return: return count for numbers printed
 */

int print_octal(va_list ap)
{
	unsigned int num = 0;
	int count = 0;

	num = va_arg(ap, unsigned int);
	count += recur_octal(num);

	return (count);
}
