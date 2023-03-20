#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area src to memory area des
 * @n: num of bytes
 * @src: copy from
 * @dest: copy to
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
