#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	char n = 'a';
	int i = 0;
	while (i < 10)
	{
		while (n <= 'z')
		{
			putchar(n);
			n++;
		}
		putchar('\n');
		i++;
	}

}
