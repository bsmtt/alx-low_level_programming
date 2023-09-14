#include "main.h"

/**
 * print_line - check the code
 * @n : line count
 * Return: Always void.
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
