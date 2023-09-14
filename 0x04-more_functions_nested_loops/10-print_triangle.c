#include "main.h"

/**
 * print_triangle - check the code
 * @size : line count
 * Return: Always void.
 */
void print_triangle(int size)
{
	int i = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (i <= size)
	{
		for (int s = 1; s <= size; s++)
		{
			if ((s + i) <= n)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
		i++;
	}
}
