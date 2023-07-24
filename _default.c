#include <stdarg.h>
#include "main.h"

/**
 * _default - invoke handle default function.
 * @f:the current char of the input format,
 * @ff: the char after @f,
 * @format:the first input in _printf,
 * @argptr: the list of arguments.
 *
 * Return: length of the printed string.
*/
int _default(char f, char ff, const char *format, va_list argptr)
{
	return (handle_default(f, ff, format, argptr));
}
