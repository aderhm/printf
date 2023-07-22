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
	int counter, x = 0;
	va_list args;

	va_start(args, format);

	counter = 0;
	while (*format)
	{
		if (*format == '%')
		{
			switch (*(format + 1))
			{
				case 'c':
					x = handle_char(args);
					break;
				case 's':
					x = handle_str(args);
					break;
				case '%':
					x = handle_others(*(format + 1));
					break;
				case '\0':
					break;
				default:
					x = handle_others(*format);
					x += handle_others(*(format + 1));
					break;
			}
			format += 2;
			counter += x;
			continue;
		}
		else
			x = handle_others(*format);
		counter += x;
		format++;
	}
	va_end(args);
	return (counter);
}
