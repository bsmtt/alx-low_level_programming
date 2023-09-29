#include "main.h"

/**
 * _sqrt_recursion - checks if a character is digit
 * @n: the  value
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqr(n, 1));
}
/**
 * _sqr - checks if a character is digit
 * @n: the  value
 * @sq: square value
 * Return: int
 */
int _sqr(int n, int sq)
{
	if (sq * sq == n)
	{
		return (sq);
	}

	if (sq * sq < n)
	{
		return (_sqr(n, sq + 1));
	}

	return (-1);
}
