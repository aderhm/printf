#include <stdarg.h>
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
	printstr(s);
	return (_strlen(s));
}
