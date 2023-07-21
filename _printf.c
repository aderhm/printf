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
	char *s, c;
	va_list args;

	va_start(args, format);

	if (format[1] == 's')
	{
		s = va_arg(args, char *);
		printstr(s);
	}
	else if (format[1] == 'c')
	{
		c = va_arg(args, int);
		printchar(c);
	}

	va_end(args);

	return (1);

}

/**
 * main - check _printf.
 *
 * Return: Always 0.
 */
int main(void)
{
	_printf("%s", "Helloooo!");
	write(1, "\n", 1);
	return (0);
}
