#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to the structure
 * @name: pointer to the name of the dog
 * @age: name of the dog
 * @owner: pointer to the owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
