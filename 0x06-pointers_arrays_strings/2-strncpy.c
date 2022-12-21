#include "main.h"


/**
 * *_strncpy - copies a string
 * @dest: destination of the string
 * @src: source of the string
 * @n: length of the int.
 *
 * Return: pointer to the str dest.
 */

char *_strncpy(char *dest, char *src, int n);
{
	int i,

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);
}
