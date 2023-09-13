#include "main.h"

/**
 * print_to_98 - check the code
 * @n: start point
 * Return: Always void.
 */
void print_to_98(int n)
{
	if (n > 98)
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	if (n < 98)
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	printf("%d", 98);

	putchar('\n');
}
