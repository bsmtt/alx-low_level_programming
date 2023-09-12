#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
