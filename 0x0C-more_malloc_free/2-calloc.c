#include "main.h"

/**
 * *_calloc - allocates memory of an array, using malloc
 * @nmemb: the memory
 * @size: size of thee mem
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int b;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		m[b] = 0;
	return (m);
}
