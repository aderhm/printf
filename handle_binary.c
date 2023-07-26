#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * handle_binary - handle binaries
 * @argptr: list of arguments
 *
 * Return: printed str length
 */
int handle_binary(va_list argptr)
{
	unsigned int n;
	int i, len;
	char *binary;

	n = va_arg(argptr, unsigned int);
	if (n == 0)
		return (write(1, "0", 1));

	binary = malloc(sizeof(binary));

	i = 0;
	while (n)
	{
		binary[i] = (n % 2) + '0';
		n /= 2;
		i++;
	}
	binary[i] = '\0';

	i -= 1;
	while (i >= 0)
	{
		write(1, &binary[i], 1);
		i--;
	}

	len = _strlen(binary);

	free(binary);

	return (len);
}
