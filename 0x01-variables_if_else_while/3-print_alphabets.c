#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;
	char m;

	n = 'a';
	m = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}

	putchar('\n');

	return (0);
}
