#include <stdarg.h>
#include "main.h"

/**
 * call_back_handle_str - invoke function handle_str.
 * @argptr: the list of arguments,
 *
 * Return: length of the printed string.
 */
int call_back_handle_str(va_list argptr)
{
	return (handle_str(argptr) - 1);
}
