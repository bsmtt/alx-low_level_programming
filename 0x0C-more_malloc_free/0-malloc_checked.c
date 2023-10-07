#include "main.h"

/**
 * malloc_checked - checks if a character is lowercase
 * @b: the string
 * Return: char
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}


	return (ptr);
}
