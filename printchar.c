#include <unistd.h>

/**
 * printchar - prints the character c to stdout.
 * @c: The character to print
 *
 * Return: void.
 */
void printchar(char c)
{
	write(1, &c, 1);
}
