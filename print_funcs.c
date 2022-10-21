#include "main.h"

/**
 * print_string - Prints a string
 * @s: String to be printed
 * Return: Number of characters printed
 */

int print_string(char *s)
{
	int count = 0;

	if (s != NULL)
	{
		while (*s)
		{
			_putchar(*s++);
			count++;
		}
	}
	else
		return (print_string("(null)"));
	return (count);
}

/**
 * print_integer - Prints an integer
 * @i: Integer to be printed
 * Return: Number of characters
 */

int print_integer(long int i)
{
	int count = 0;

	if (i < 0)
	{
		_putchar('-');
		count++;
		i = -i;
	}
	if (i / 10)
		count += print_integer(i / 10);

	_putchar(i % 10 + '0');
	count++;
	return (count);
}
