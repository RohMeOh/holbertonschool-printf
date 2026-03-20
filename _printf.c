#include "main.h"

/**
 * _printf - prints formatted output to stdout
 * @format: format string
 *
 * Return: number of characters printed, or -1 on error
 */

int _printf(const char *format, ...)
{
	va_list args; /* holds the ... arguments after format */
	int count = 0; /* total characters printed (what we return) */

	if (format == NULL)
		return (-1);

	va_start(args, format); /* init args so handle_specifier can va_arg */

	while (*format) /* stop at end of C string '\0' */
	{
		if (*format != '%') /* normal char, not a conversion */
		{
			/* stdout = fd 1; print exactly one byte at format */
			if (write(1, format, 1) == -1)
			{
				va_end(args);
				return (-1);
			}
			count++; /* one character printed */
			format++; /* move to next char in format string */
		}
		else /* *format == '%', next char is c, s, %, etc. */
		{
			format++; /* skip the '%'; next char is c, s, %, etc. */

			if (*format == '\0') /* string ended right after '%' */
			{
				va_end(args);
				return (-1);
			}

			count += handle_specifier(*format, args);
			format++; /* consumed specifier; continue */
		}
	}

	va_end(args);
	return (count);
}
