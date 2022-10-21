#include "main.h"

/**
 * _putchar - Write the character c to stdout
 * @c: Character to be printed
 * Return: 1(Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
