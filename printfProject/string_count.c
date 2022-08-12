#include "main.h"

/**
 * string_count - counts the characters in a string
 * @string: string value
 *
 * Return: count
 */

int string_count(char *string)
{
	int count = 0;
	int i = 0;

	while (*(string + i) != '\0')
	{
		count += 1;
		i++;
	}
	return (count);
}

