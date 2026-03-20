#include "main.h"

/**
 * print_char - prints a character
 * @c: character to print
 *
 * Return: number of characters printed
 */

int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * print_string - prints a string
 * @s: string to print
 *
 * Return: number of characters printed
 */

int print_string(char *s)
{
	int i;
	int count;

	i = 0;
	count = 0;

	if (s == NULL)
	{
		count += print_char('(');
		count += print_char('n');
		count += print_char('u');
		count += print_char('l');
		count += print_char('l');
		count += print_char(')');
		return (count);
	}

	while (s[i] != '\0')
	{
		count += print_char(s[i]);
		i++;
	}
	return (count);
}

