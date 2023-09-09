#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;

	n = 0;
	i = 0;

	for (n = 0; n <= 9; n++)
	{
		for (i = n + 1; i <= 9; i++)
		{
			putchar(n + '0');
			putchar(i + '0');
			if (n != 8 || i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
