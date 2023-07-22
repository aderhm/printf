#include <stdarg.h>
#include "main.h"

/**
 * handle_str - gets the parameter of type (char *).
 * @argptr: the list of arguments,
 * @char_counter: counts the printed characters,
 *
 * Return: void.
 */
void handle_str(va_list argptr, int char_counter)
{
	char *s;

	s = va_arg(argptr, char *);
	printstr(s);
	char_counter++;
}
