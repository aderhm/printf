#include "main.h"

/**
 * handle_default - checks null char or space after the %.
 * @c: always a percent sign: '%',
 * @cc: the specifier.
 *
 * Return: 2 or -1.
 */
int handle_default(char c, char cc)
{
	if (cc == '\0' || cc == ' ')
		return (-1);

	handle_others(c);
	handle_others(cc);
	return (2);
}
