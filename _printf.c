#include "main.h"
#include <stdio.h>

/**
 * _printf - a function that prints to stdout
 * @format: a string character
 *
 * Return: count
 */

int _printf(const char *format, ...)
{
	int count = 0;
	int i = 0;

	va_list(data);
	va_start(data, format);
	while (*(format + i) != '\0')
	{
		if (*(format + i) != '%')
			count += _putchar(*(format + i));
		else if (*(format + i) == '%' && *(format + (i + 1)) != ' ')
		{
			switch (*(format + (i + 1)))
			{
				case 'c':
					count += _putchar(va_arg(data, int));
					break;
				case 's':
					count += string_count(va_arg(data, char*));
					break;
				default:
					break;
			}
			i += 1;
		}
		i++;
	}
	return (count);
}
