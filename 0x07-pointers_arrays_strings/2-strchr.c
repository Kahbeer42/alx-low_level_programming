#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: string
 * @c: char
 *
 * Return: a pointer to the first occurrence of a char
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
	{
		return (s);
	}

	return (NULL);
}
