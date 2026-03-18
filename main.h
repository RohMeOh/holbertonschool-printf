#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* BRAIN (CONTROLLER)
 * int - returns a number.
 * _printf - function name.
 * char * - points to the first character of a string.
 * const - shields string from being modified
 * format - the string read by the function.
 * ... means function can receive multiple arguments of different types 
 */
int _printf(const char *format, ...);

/* NERVOUS SYSTEM (HANDLER)
 * int - returns number of character printed.
 * handle_specifier - decision maker.
 * char c - specifier.
 * va_list args - list of extra arguments.
 */
int handle_specifier(char c, va_list args);

/* MUSCULAR SYSTEM (HELPERS)
 * int - returns count.
 * print_string - function name.
 * char *s - points to the first character of the string.
 * print_char - function name.
 * char - stores a single character value. 
 */
int print_string(char *s);
int print_char(char);

#endif
