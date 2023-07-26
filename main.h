#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct sp - Struct sp
 *
 * @s: The specifier
 * @f: The function associated
 */
typedef struct sp
{
	char s;
	int (*f)(va_list);
} sp_t;

int _strlen(char *s);

void printstr(char *str);

int handle_char(va_list argptr);
int handle_str(va_list argptr);
int handle_percent(va_list argptr);
int handle_default(char c, char cc, const char *format, va_list argptr);
int handle_numbers(va_list argptr);
int handle_binary(va_list argptr);

int update_counter(int n, int ctr);
const char *increment_format(int n, const char *format);
int int_to_string(int num, char *num_str);

int _printf(const char *format, ...);

#endif /* MAIN_H */
