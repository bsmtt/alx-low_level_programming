#include "main.h"

/**
 * print_to_98 - check the code
 *
 * Return: Always void.
 */
void print_to_98(int n)
{
	if (n > 98)
		while (n > 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	if (n < 98)
		while (n < 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	_putchar(98);

	putchar('\n');
}
