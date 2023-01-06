#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: string to check
 * @c: char we are looking for
 *
 * Return: a pointer to the first occurrence of a char @c in the str
 * @s. Return NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
