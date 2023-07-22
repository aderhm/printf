#include "main.h"

/**
 * handle_others - prints unknown specifiers and normal chars.
 * @other: the char to print,
 * @char_counter: counts the printed characters,
 *
 * Return: void.
 */
void handle_others(char other, int char_counter)
{
	printchar(other);
	char_counter++;
}
