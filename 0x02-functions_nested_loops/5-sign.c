#include "main.h"

/**
 * print_sign - checks if a character is lowercase
 * @c: the character to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int print_sign(int n)
{
	if(n > 0)
	{
		printf("+");
		return 1;
	}
	else if (n < 0)
	{
		printf("-");
		return 1;
	}
	printf("0");
	return 0;
}
