#include "main.h"

/**
 * _printf - Prints formatted strings
 * @format: Unprocessed string
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int total = 0, flag, count;

	if (format == NULL)
		return (0);
	va_start(args, format);
	for (count = 0; *(format + count) != '\0'; count++)
	{
		if (format[count] == '%')
		{
			flag = 1;
		}
		else if (flag == 1)
		{
			flag = 0;
			switch (format[count])
			{
			case 'c':
				_putchar(va_arg(args, int));
				total += 1;
				break;
			case 's':
				total += print_string(va_arg(args, char *));
				break;
			case '%':
				_putchar('%');
				total += 1;
				break;
			default:
				_putchar('%');
				_putchar(format[count]);
				total += 2;
			}
		}
		else
		{
			_putchar(format[count]);
			total += 1;
		}
	}
	va_end(args);
	return (total);
}
