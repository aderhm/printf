#include <unistd.h>

/**
 * _strlen - returns the length of a string
 * @s: The string
 *
 * Return: the length of @s.
 */
int _strlen(char *s)
{
	size_t len = 0;

	while (s[len])
		len++;

	return (len);
}

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
