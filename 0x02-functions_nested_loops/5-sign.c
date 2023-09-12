#include "main.h"

/**
 * print_sign - checks if a character is lowercase
 * @c: the character to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int print_sign(int n)
{
	char sign = +1;
	if(n > 0)
	{
		sign = 1;
	}
	else if (n < 0)
	{
		sign = -1;
	}
	else
	{
		printf("%d", 0);
		sign = 0;
	}
	return sign;
}
