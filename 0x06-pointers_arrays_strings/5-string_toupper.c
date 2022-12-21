#include "main.h"

/**
 * string_toupper - changes all lowercase of a string to uppercase
 * @s: the string
 *
 * Return: 0
 */

char *string_toupper(char *s)
{
	int j;

	while (*(s + j))
	{
		if (*(s + j) >= 'a' && *(s + j) <= 'z')
			*(s + j) -= 'a' - 'A';
		j++;

	}
	return (s);
}
