#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: a character string composed of zero or more directives.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int num_of_printed_chars;
	va_list args;

	va_start(args, format);

	num_of_printed_chars = 0;
	while (*format)
	{
		if (*format == '%')
		{
			switch (*(format + 1))
			{
				case 'c':
					handle_char(args, num_of_printed_chars);
					break;
				case 's':
					handle_str(args, num_of_printed_chars);
					break;
				case 'd':
					printstr("%%d is not handeled yet\n");
					break;
				case 'i':
					printstr("%%d is not handeled yet\n");
					break;
				default:
					handle_others(*(format + 1), num_of_printed_chars);
					break;
			}
			format += 2;
			continue;
		}
		else
			handle_others(*format, num_of_printed_chars);
		format++;
	}

	va_end(args);

	return (num_of_printed_chars);
}

/**
 * main - check _printf.
 *
 * Return: Always 0.
 */
int main(void)
{
	_printf("%c%c, %cc %%\n", 'h', 'e', 'l');
	_printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	_printf("Unknown:[%r]\n");

	return (0);
}
