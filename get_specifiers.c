#include "main.h"
/**
 * get_specifiers - get char and function pointer
 *
 * @i: int
 * Return: sp
 */

sp_t get_specifiers(int i)
{
	sp_t sp[] = {
		{'c', handle_char},
		{'s', handle_str},
		{'%', handle_percent},
		{'d', handle_numbers},
		{'i', handle_numbers},
		{'b', handle_binary},
		{'r', handle_rs},
		{'R', handle_str}
	};

	return (sp[i]);
}
