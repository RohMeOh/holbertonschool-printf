#include "main.h"

/**
 * handle_specifier - decides what to do based on specifier
 * @c: specifier (c, s, %)
 * @args: list of extra arguments
 *
 * Return: number of characters printed
 */

int handle_specifier(char c, va_list args)
{
	int ch;
	char *str;

	// IF SPECIFIER IS 'c' (CHARACTER)
	// extract value from args.
	// send it to print_char.
	// return count.
	if (c == 'c')
	{
		ch = va_arg(args, int);
		// va_arg(args, int) -> gets next value (char stored as int).
		return (print_char(ch));
		// print_char -> prints one character -> returns 1.
	}

	// IF SPECIFIER IS 's' (STRING)
	// extract string from args.
	// send it to print_string.
	// return total count.
	if (c == 's')
	{
		str = va_arg(args, char *);
		// va_arg(args, char *) -> gets pointer to string.
		return (print_string(str));
		// print_string -> loops through string -> returns count.
	}

	// IF SPECIFIER IS '%' (PERCENT SIGN)
	// no extraction needed.
	// just print '%' directly.
	if (c == '%')
	{
		return (print_char('%'));
		// print_char('%') -> prints % -> returns 1.
	}

	// IF SPECIFIER IS UNKNOWN
	// return 0 (nothing printed).
	return (0);
}

