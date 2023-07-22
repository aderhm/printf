#include <unistd.h>
#include "main.h"


/**
 * printstr - prints the string str to stdout.
 * @str: The string to print
 *
 * Return: the number of characters printed.
 */
void printstr(char *str)
{
	int i, len = _strlen(str);

	i = 0;
	while (i < len)
	{
		write(1, &str[i], 1);
		i++;
	}
}
