#include "holberton.h"

/**
 * print_int - prints an integer
 * @n: number to be printed
 *
 * Return: count of numbers printed
 */
int print_int(int n)
{
	int count = 1;
	unsigned int num = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = n * -1;
	}

	else
	{
		num = n;
	}

	if (num / 10)
	{
		count += print_int(num / 10);
	}
	_putchar((num % 10) + 48);
	return (count);
}

/**
 * recur_unsig - prints unsigned integer
 * @n: number to be printed
 *
 * Return: count of numbers
 */
int recur_unsig(unsigned int n)
{
	int count = 1;

	if ((n / 10) > 0)
	{
		count += recur_unsig(n / 10);
	}
	_putchar((n % 10) + 48);
	return (count);
}

/**
 * recur_octal - prints an integer in octal form
 * @n: number to be printed
 *
 * Return: count of numbers printed
 */
int recur_octal(unsigned int n)
{
	int count = 1;

	if ((n / 8) > 0)
	{
		count += recur_octal(n / 8);
	}
	_putchar((n % 8) + 48);
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
