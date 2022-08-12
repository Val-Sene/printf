#include "main.h"

int decimal_count(int value)
{
	if (value < 0)
	{
		count += _putchar('-');
		value = value * -1;
	}

	if (value / 10)
		count += decimal_count(value / 10);
	count += _putchar(value % 10 + '0');

	return (count);
}
