#include "main.h"

/**
 * print_rev - check the code
 * @s: start point
 * Return: Always void.
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int i = length - 1;

	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}

	printf("\n");
}
