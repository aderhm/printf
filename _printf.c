#include <unistd.h>
#include <stdarg.h>
#include "main.h"

#define SIZE_OF_SPECIFIERS 7

/**
 * _printf - produces output according to a format.
 * @format: a character string composed of zero or more directives.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	sp_t sp[SIZE_OF_SPECIFIERS];
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
				sp[i] = get_specifiers(i);
				if (sp[i].s == *(format + 1))
				{
					(i == 1 || i == 3 || i == 4 || i == 5 || i == 6) ?
						counter += sp[i].f(args) - 1 : sp[i].f(args);
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
			write(1, format, 1);
		format++;
		counter++;
	}
	va_end(args);
	return (counter);
}
