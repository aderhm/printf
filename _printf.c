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
	char *s, c;
	va_list args;

	va_start(args, format);

	num_of_printed_chars = 0;
	while (*format)
	{
		if (*format == '%')
		{
			if (*(format + 1) == 'c')
			{
				c = va_arg(args, int);
				printchar(c);
				num_of_printed_chars++;
			}
			else if (*(format + 1) == 's')
			{
				s = va_arg(args, char *);
				printstr(s);
				num_of_printed_chars += _strlen(s);
			}
			else if (*(format + 1) == '%')
			{
				printchar('%');
				num_of_printed_chars++;
			}
			format += 2;
			continue;
		}
		else
		{
			printchar(*format);
			num_of_printed_chars++;
		}
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
	return (_printf("%c, %c, and %c are %s,\nbut %% is a %s.\n",
	'a', 'b', 'c', "letters", "symbole"));
}
