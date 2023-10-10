#include "dog.h"
#include <stdio.h>

/**
 * print_dog - check the code
 * @d : d
 * Return: Always void.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");

	}
}
