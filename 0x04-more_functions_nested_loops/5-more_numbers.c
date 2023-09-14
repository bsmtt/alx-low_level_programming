#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always void.
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int n = 0;

		while (n <= 14)
		{
			printf("%d", n);
			n++;
		}
		putchar('\n');
		i++;
	}
	putchar('\n');
}
