#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int handle_specifier(char c, va_list args);
int print_string(char *s);
int print_char(char c);
int print_long(long num);
int print_int(int n);

#endif

