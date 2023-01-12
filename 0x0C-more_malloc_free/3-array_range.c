#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, size;
	int *array;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		array[i] = min++;
	return (array);
}
