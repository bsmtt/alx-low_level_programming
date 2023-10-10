#include "dog.h"

/**
 * init_dog - check the code
 * @name: name
 * @age: age
 * @owner: owner
 * @d : d
 * Return: Always void.
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
