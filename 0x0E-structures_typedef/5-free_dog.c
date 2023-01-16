#include <stdio.h>
#include "dog.h"

/**
 * free_dog - a function that free dog
 * @d: pointer to the dog_t
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
