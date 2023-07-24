#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct sp - Struct sp
 *
 * @specifier: The specifier
 * @f: The function associated
 */
typedef struct sp
{
	char s;
	int (*f)(va_list);
} sp_t;

int _strlen(char *s);

void printchar(char c);
void printstr(char *str);

int handle_char(va_list argptr);
int handle_str(va_list argptr);

int handle_percent(va_list argptr);

int handle_default(char c, char cc, const char *format, va_list argptr);

int handle_others(char other);

int update_counter(int n, int ctr);
const char *increment_format(int n, const char *format);

int _printf(const char *format, ...);

#endif /* MAIN_H */
