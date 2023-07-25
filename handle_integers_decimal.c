#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * handle_integers_decimal - handle %d
 *
 * @argptr: list of arguments
 *
 * Return: 1
 */

int handle_integers_decimal(va_list argptr)
{
	char num_str[50];
	int num = va_arg(argptr, int);
	int length = int_to_string(num, num_str);

	if (length > 0)
		write(1, num_str, length);
	else
		write(1, "0", 1);
	return (length);
}
