#include <unistd.h>
#include <string.h>

/**
 * _printf - produces output according to a format.
 * @format: a character string composed of zero or more directives.
 *
 * return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	write(1, format, strlen(format));
	return (strlen(format));

}

/**
 * main - check _printf.
 *
 * return: Always 0.
 */
int main(void)
{
	_printf("Hello, me ");
	_printf("Hello, world");
	write(1, "\n", 1);
	return (0);
}
