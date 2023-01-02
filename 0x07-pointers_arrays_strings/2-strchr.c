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
	for (;; *s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
	}

	return (NULL);
}
