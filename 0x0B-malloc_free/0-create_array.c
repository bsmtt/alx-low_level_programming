#include "main.h"

/**
 * create_array - checks if a character is lowercase
 * @c: the integer to check
 * @size : array size
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return NULL;
	}
	
	char *array;
	array = (char *) malloc(size * sizeof(char));

	if (array == NULL)
	{
		return NULL;
	}
	
	unsigned int i;
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return array;
}
