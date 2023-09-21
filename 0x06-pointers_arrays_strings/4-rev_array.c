#include "main.h"

/**
 * reverse_array - check the code
 * @a: first variable
 * @n: second variable
 * Return: Always void.
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;

	while (start < end)
	{
		int tmp = *start;
		*end = *start;
		*end = tmp;
		start++;
		end--;
	}
}
