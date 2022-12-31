#include "main.h"


/**
 * *_strncpy - copies a string
 * @dest: destination of the string
 * @src: source of the string
 * @n: length of the int.
 *
 * Return: pointer to the string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	int i = 0;

	while (i < n; &&src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
