#include "holberton.h"

/**
 * conv_spec - handles the conversion specifier
 * @format: string
 * @ap: argument
 *
 * Return: count of print
 */
int conv_spec(const char *format, va_list ap)
{
	int i, count = 0, j = 0;
	conv_t converter[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_digits},
		{'d', print_digits},
		{'u', print_unsig},
		{'o', print_octal},
		{'b', print_binary},
		{'\0', NULL}
	};

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar(format[i]);
				count++;
			}
			for (j = 0; converter[j].specifier != '\0'; j++)
			{
				if (converter[j].specifier == format[i + 1])
				{
					converter[j].f(ap);
					i++;
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
