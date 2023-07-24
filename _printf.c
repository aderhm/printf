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
	sp_t sp[] = { {'c', handle_char},
		{'s', handle_str}, {'%', handle_percent} };
	int i, n, counter = 0;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			i = 0;
			while (i < SIZE_OF_SPECIFIERS)
			{
				if (sp[i].s == *(format + 1))
				{
					(i == 1) ? counter += sp[1].f(args) - 1 : sp[i].f(args);
					format++;
					break;
				}
				i++;
			}
			if (i == SIZE_OF_SPECIFIERS)
			{
				n = handle_default(*format, *(format + 1), format, args);
				if (n == -1)
					return (-1);
				format = increment_format(n, format);
				counter = update_counter(n, counter);
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
