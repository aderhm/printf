#include <unistd.h>
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
	(void)argptr;

	write(1, "%", 1);
	return (1);
}
