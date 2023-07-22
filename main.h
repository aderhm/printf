#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _strlen(char *s);
void printchar(char c);
void printstr(char *str);
int handle_char(va_list argptr);
int handle_str(va_list argptr);
int handle_others(char other);

int _printf(const char *format, ...);

#endif /* MAIN_H */
