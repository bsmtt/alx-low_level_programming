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

	while (n <= 9)
	{
		while (i <= 9)
		{
			putchar(n + '0');
			putchar(i + '0');
			if (i != 9)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		n++;
	}

	putchar('\n');

	return (0);
}
