#include "main.h"

/**
 * *_memset - fills the first n bytes of memory area
 * as: memory area pointed to
 * @b: constant byte
 * @n: bytes of the memory area
 *
 * Return:pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (0);
}
