#include "main.h"

/**
 * print_square - check the code
 * @n : line count
 * Return: Always void.
 */
void print_square(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (i < n)
	{
		int s = 0;

		while (s < n)
		{
			_putchar('#');
			s++;
		}
		_putchar('\n');
		i++;
	}
}
