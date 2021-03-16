#include "holberton.h"

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
 * recur_binary - prints a number in binary form
 * @n: number to be printed
 *
 * Return: count of numbers printed
 */
int recur_binary(unsigned int n)
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
