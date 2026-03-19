#include "main.h"

/**
 * print_char - prints a character
 * @c: character to print
 *
 * Return: number of characters printed
 */

// 1 = terminal (where it prints)
// &c = character (what it prints)
// 1 = value (1 byte for 1 character)
// return count = 1
int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * print_string - prints a group of characters
 * @s: string to print
 *
 * Return: number of characters printed
 */

// SAME THING AS, BUT SIMPLER THAN:
//      print_char(s[i]);
//      count++;
//      i++;
// LOGIC:
//       print_char(s[i]) -> prints character -> returns 1
//       count += 1
int print_string(char *s)
{
	int i = 0;
	int count = 0;
	while (s[i] != '\0')
	{
		count += print_char(s[i]);
		i++;
	}
	return (count);
}

