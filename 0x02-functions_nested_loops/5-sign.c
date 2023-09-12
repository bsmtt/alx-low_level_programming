#include "main.h"

/**
 * print_sign - checks if a character is lowercase
 * @c: the character to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int print_sign(int n)
{
	int sign = 0;

	if(n > 0)
	{
		sign = 1;
		printf("+1\n");
		return sign;
	}
	else if (n < 0)
	{
		sign = 1;
		printf("-1\n");
		return sign;
	}
	printf("0\n");
	return sign;
}
