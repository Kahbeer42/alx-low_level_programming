#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - function locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: return to
 * @accept: return from
 *
 * Return: a pointer to the byte s.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
