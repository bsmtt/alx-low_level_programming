#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set to 1.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = *n | mask;

	return (1);
}
