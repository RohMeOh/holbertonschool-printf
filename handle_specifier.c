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
	int count;
	char *str;

	count = 0;
	if (c == 'c')
	{
		ch = va_arg(args, int);
		return (print_char(ch));
	}

	if (c == 's')
	{
		str = va_arg(args, char *);
		return (print_string(str));
	}

	if (c == '%')
	{
		return (print_char('%'));
	}

	count += print_char('%');
	count += print_char(c);
	return (count);
}

