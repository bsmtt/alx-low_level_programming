#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _realloc - checks if a character is lowercase
 * @ptr: the string
 * @old_size : concat
 * @new_size : new size
 * Return: char
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	min_size = old_size < new_size ? old_size : new_size;
	memcpy(new_ptr, ptr, min_size);
	free(ptr);

	return (new_ptr);
}
