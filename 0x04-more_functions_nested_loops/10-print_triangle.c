#include "main.h"

/**
 * print_triangle - check the code
 * @size : line count
 * Return: Always void.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	for (int i = 1; i <= size; i++)
	{
		for (int s = 1; s <= size; s++)
		{
			if ((s + i) <= size)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
