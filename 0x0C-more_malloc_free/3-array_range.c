#include "main.h"
#include <string.h>

/**
 * array_range - checks if a character is lowercase
 * @max: the string
 * @min : concat
 * Return: char
 */
int *array_range(int min, int max)
{
	int *arr;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}


	arr = malloc(size * sizeof(int));
	if (arr != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			arr[i] = min + i;
		}
	}


	return (arr);
}
