#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * handle_percent - prints %.
 * @argptr: the list of arguments,
 *
 * Return: 1.
 */
int handle_percent(va_list argptr)
{
	(void)argptr;

	printchar('%');
	return (1);
}
