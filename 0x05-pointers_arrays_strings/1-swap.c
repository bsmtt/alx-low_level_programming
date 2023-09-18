#include "main.h"

/**
 * swap_int - check the code
 * @a: first variable
 * @b: second variable
 * Return: Always void.
 */
void swap_int(int *a, int *b)
{
	int t = *b;
	*a = *b;
	*b = t;
}
