#include <stddef.h>

/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @sie: size
 * @action: action
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
