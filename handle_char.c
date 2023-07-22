#include <stdarg.h>
#include "main.h"

/**
 * handle_char - gets the parameter of type char.
 * @argptr: the list of arguments,
 * @char_counter: counts the printed characters,
 *
 * Return: void.
 */
void handle_char(va_list argptr, int char_counter)
{
	char c;

	c = va_arg(argptr, int);
	printchar(c);
	char_counter++;
}
