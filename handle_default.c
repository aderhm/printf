#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * handle_default - checks null char or space after the %.
 * @c: always a percent sign: '%',
 * @cc: the specifier.
 * @format: The first argument that we loop through,
 * @argptr: the list of arguments,
 *
 * Return: 2 or -1.
 */
int handle_default(char c, char cc, const char *format, va_list argptr)
{
	if (cc == '\0')
		return (-1);

	if (cc == ' ')
	{
		format += 1;
		while (*format == ' ')
			format++;

		switch (*format)
		{
			case 'c':
				return (handle_char(argptr));
			case 's':
				return (handle_str(argptr));
			case '%':
				return (handle_percent(argptr));

			default:
				return (-1);
		}
	}

	write(1, &c, 1);
	write(1, &cc, 1);
	return (2);
}
