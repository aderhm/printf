#include <stdarg.h>
#include "main.h"

/**
 * handle_percent - prints %.
 * @argptr: the list of arguments,
 *
 * Return: 1.
 */
int handle_percent(va_list argptr)
{
	char c;

	c = va_arg(argptr, int);
	c = '%';
	printchar(c);
	return (1);
}
