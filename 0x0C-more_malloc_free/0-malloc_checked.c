#include "main.h"

/**
 * *malloc_checked - Allocates memory using malloc
 * @b: integer
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);
	if (j == NULL)
		exit(98);
	return (j);
}

