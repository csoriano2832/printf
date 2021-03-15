#include "holberton.h"

/**
 * print_int - prints an integer
 * @n: number to be printed
 *
 * Return: count of numbers printed
 */
int print_int(int n)
{
	int count = 1, num = 0;

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
 * recur_binary - prints a number in binary form
 * @n: number to be printed
 *
 * Return: count of numbers printed
 */
int recur_binary(int n)
{
	int count = 1;

	if ((n / 2) > 0)
	{
		count += recur_binary(n / 2);
	}
	_putchar((n % 2) + 48);
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
