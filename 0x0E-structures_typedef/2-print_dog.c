#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the struct dog
 * If an element of d is NULL, print (nil) instead of
 * this element. (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("name: %s\n", d->name);
		else
			printf("name: (nil)\n");
		printf("age: %0.6f\n", d->age);

		if (d->owner != NULL)
			printf("owner: %s\n", d->owner);
		else
			printf("owner: (nil)\n");
	}
}
