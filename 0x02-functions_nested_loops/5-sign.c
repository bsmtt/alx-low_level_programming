#include "main.h"

/**
 * print_sign - checks if a character is lowercase
 * @n: the integer to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int print_sign(int n)
{
	int sign = +1;

	if (n > 0)
	{
		_putchar('+');
		sign = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		sign = -1;
	}
	else
	{
		_putchar('0');
		sign = 0;
	}
	return (sign);
}
