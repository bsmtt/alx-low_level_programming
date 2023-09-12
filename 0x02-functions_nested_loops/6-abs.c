#include "main.h"

/**
 * _abs - checks if a character is lowercase
 * @n: the integer to check
 *
 * Return: n if the integer  is +, -n otherwise
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
