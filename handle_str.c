#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * handle_str - gets the parameter of type (char *).
 * @argptr: the list of arguments,
 *
 * Return: length of the printed string.
 */
int handle_str(va_list argptr)
{
	char *s;

	s = va_arg(argptr, char *);
	if (!s)
	{
		printstr("(null)");
		return (6);
	}

	printstr(s);
	return (_strlen(s));
}

/**
 * handle_rs - gets the parameter of type (char *).
 * @argptr: the list of arguments,
 *
 * Return: length of the printed string.
 */

int handle_rs(va_list argptr)
{
	int length = 0;
	char *s;

	s = va_arg(argptr, char *);
	if (!s)
	{
		printstr("(null)");
		return (6);
	}

	length = _strlen(s);

	while (--length >= 0)
	{
		write(1, &s[length], 1);
	}

	return (_strlen(s));
}
