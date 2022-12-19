#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src to dest
 * @src: char to be checked
 * @dest: char to be checked
 *
 * Return: O
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}
