#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _strlen(char *s);
void printchar(char c);
void printstr(char *str);
void handle_char(va_list argptr, int char_counter);
void handle_str(va_list argptr, int char_counter);
void handle_others(char other, int char_counter);

#endif /* MAIN_H */
