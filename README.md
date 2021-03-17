# Our _printf() function
_printf - formatted output conversion
# Description
The _printf() function produce output according to a format as described below. Also, write output to stdout, the standard output stream.
# Format of the format string
The format string is a character string, beginning and ending inits initial shift state, if any. The format string is composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification is introduced by the character % and ends with conversion specifier.
# Conversion specifiers
A character that specifies the type of conversion to be applied. The conversion specifiers and their meaning are:
• d, i: The int argument should be signed decimal notation, and the resulting number is written. 

• c: The int argument is converted to a char, and the resulting character is written. 

• s: The const char * argument is expected to be a pointer to an array of character type (pointer to a string). Characters from the array are written up to (but not including) a terminating null byte ('\0'). 

• %: A '%' is written. No argument is converted. The complete conversion specification is '%%'. 

• o, u, x, X: The unsigned int argument is converted to unsigned octal (o), unsigned decimal (u), or unsigned hexadecimal (x and X) notation. The letters abcdef are used for x conversions; the letters ABCDEF are used for X conversions. The precision, if any, gives the minimum number of digits that must appear; if the converted value requires fewer digits, it is padded on the left with zeros. The default precision is 1. When 0 is printed with an explicit precision 0, the output is empty.

• R: Converts a string to a rot13’ed string

• b: the unsigned int argument is converted to unsigned binary (b)

#	About Functions

# int _putchar(char c)
This function gets a char parameter and writes the parameter to the stdout, the standard output stream.

# int conv_spec(const char *format, va_list ap)
This function gets a variadic arguments list and the format string. It runs the string printing characters and checking for any conversion specifiers.
# int valid_conversion(char c)
This function gets a character and checks to see if it’s a validated conversion specifier of our printf and returns “1” if it’s a validated specifier otherwise returns “0”
# int function_call(char c, va_list ap)
This function gets a variadic arguments list and the specifier that was validated in the previous function and calls upon the functions that is require for the specifier an passes on the argument.
# int print_char(va_list ap)
This function gets a variadic argument list in the form of a character and prints out that character.
# int print_string(va_list ap)
This function gets a variadic function list in the form of a const char * and prints out a string. 
# int print_rot13(va_list ap)
This function gets a variadic function list in the form of a const char* and converts the string to a rot13’ed string and prints it.
# int print_int(int n)
This function gets an integer and prints the last digit of the number as recursion is applied.
# int print_unsig(va_list ap)
This function gets an variadic function list argument in the form of an unsigned integer and prints the last digit of the number as recursion is applied.
# int print_octal(va_list ap)
This function gets an variadic function list argument in the form of an unsigned integer and prints the last digit of the number as recursion is applied while converting it to an octal number.
# int print_binary(va_list ap)
This function gets an variadic function list argument in the form of an unsigned integer and prints the last digit of the number as recursion is applied while converting it to an binary number.
# int print_h(va_list ap)
This function gets an variadic function list argument in the form of an unsigned integer and prints the last digit of the number as recursion is applied while converting it to an hexadecimal number and lowercase letters.
# int print_H(va_list ap)
This function gets an variadic function list argument in the form of an unsigned integer and prints the last digit of the number as recursion is applied while converting it to an hexadecimal number uppercase letters.
#	Return Value
Upon successful return, the _printf() function return the number of characters printed (excluding the null byte used to end output to strings).
If an output error is encountered, a negative value is returned.


