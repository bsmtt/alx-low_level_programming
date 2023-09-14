#include "main.h"

/**
 * print_diagonal - check the code
 * @n : line count
 * Return: Always void.
 */
void print_diagonal(int n)
{
	int i = 0;
	int s = 0;

	if (i <= 0)
		_putchar('\n');

	while (i < n)
	{
		for (s = 1; s <= i; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
