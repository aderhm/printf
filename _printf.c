#include <unistd.h>
#include <stdarg.h>
#include "main.h"

#define SIZE_OF_SPECIFIERS 3

/**
 * _printf - produces output according to a format.
 * @format: a character string composed of zero or more directives.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	sp_t specifiers[] = {
		{'c', handle_char},
		{'s', handle_str},
		{'%', handle_percent}
	};
	int i, counter = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			i = 0;
			while (i < SIZE_OF_SPECIFIERS)
			{
				if (specifiers[i].specifier == *(format + 1))
				{
					specifiers[i].f(args);
					format++;
					break;
				}
				i++;
			}
			if (i == SIZE_OF_SPECIFIERS)
			{
				i = handle_default(*format, *(format + 1));
				if (i == -1)
					return (-1);
				format++;
			}
		}
		else
			handle_others(*format);
		format++;
		counter++;
	}
	va_end(args);
	return (counter);
}
