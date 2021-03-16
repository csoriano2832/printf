#include "holberton.h"

/**
 * print_h - prints hexadecimals lowercase
 * @ap: argument
 *
 * Return: count for numbers printed
 */

int print_h(va_list ap)
{
	unsigned int num = 0;
	int count = 0;

	num = va_arg(ap, unsigned int);
	count += recur_h(num);

	return (count);
}

/**
 * print_H - printes hexadecimals uppercase
 * @ap: argument
 *
 * Return: count for numbers printed
 */

int print_H(va_list ap)
{
	unsigned int num = 0;
	int count = 0;

	num = va_arg(ap, unsigned int);
	count += recur_H(num);

	return (count);
}

/**
 * recur_h - prints hexadecimals lowercase
 * @n: numbers to print
 *
 * Return: count of numbers printed
 */

int recur_h(unsigned int n)
{
	int count = 1;

	if ((n / 16) > 0)
	{
		count += recur_h(n / 16);
	}
	switch (n % 16)
	{
		case 10:
			_putchar('a');
			break;
		case 11:
			_putchar('b');
			break;
		case 12:
			_putchar('c');
			break;
		case 13:
			_putchar('d');
			break;
		case 14:
			_putchar('e');
			break;
		case 15:
			_putchar('f');
			break;
		default:
			_putchar((n % 16) + 48);
	}
	return (count);
}

/**
 * recur_H - print hexadecimals upper case
 * @n: numbers to print
 *
 * Return: count of numbers printed
 */

int recur_H(unsigned int n)
{
	int count = 1;

	if ((n / 16) > 0)
	{
		count += recur_H(n / 16);
	}
	switch (n % 16)
	{
		case 10:
			_putchar('A');
			break;
		case 11:
			_putchar('B');
			break;
		case 12:
			_putchar('C');
			break;
		case 13:
			_putchar('D');
			break;
		case 14:
			_putchar('E');
			break;
		case 15:
			_putchar('F');
			break;
		default:
			_putchar((n % 16) + 48);
	}
	return (count);
}
