#include "main.h"

/**
 * print_last_digit - checks if a character is lowercase
 * @n: the integer to check
 *
 * Return: n if the integer  is +, -n otherwise
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	int last = n % 10;

	_putchar(last + '0');
	return (last);
}
