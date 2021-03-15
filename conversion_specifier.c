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
	int i, count = 0;
	
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1])
		{
			if (valid_conversion(format[i + 1]) == 1)
			{
				count += function_call(format[i + 1], ap);
				i++;
			}
			else
			{
				_putchar(format[i]);
				count++;
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

/**
 * valid_conversion - checks if character is a valid conversion specifier
 * @c: a character from format
 ea
 * Return: 0 or 1
 */
int valid_conversion(char c)
{
	int i;
	char array[] = {'c', 's', 'i', 'd', 'o', 'u', 'b', '%'};

	for(i = 0; array[i] != '\0'; i++)
	{
		if (c == array[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * function_call - calls the correct function to print
 * @c: a character to compare with converter array
 * @ap: the next argument
 *
 * Return: number of characters printed
 */
int function_call(char c, va_list ap)
{
	int i, count = 1;
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

	for (i = 0; converter[i].specifier != '\0'; i++)
	{
		if (converter[i].specifier == c)
		{
			count += converter[i].f(ap);
			return (count);
		}
	}
	_putchar(c);

	return (count);
}
