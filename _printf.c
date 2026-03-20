#include "main.h"

/**
 * _printf - prints formatted output to stdout
 * @format: format string
 *
 * Return: number of characters printed, or -1 on error
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count;
	count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			if (write(1, format, 1) == -1)
			{
				va_end(args);
				return (-1);
			}
			count++;
			format++;
		}
		else
		{
			format++;

			if (*format == '\0')
			{
				va_end(args);
				return (-1);
			}

			count += handle_specifier(*format, args);
			format++;
		}
	}

	va_end(args);
	return (count);
}

