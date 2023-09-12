#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always void.
 */
void print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
