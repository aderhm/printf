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
