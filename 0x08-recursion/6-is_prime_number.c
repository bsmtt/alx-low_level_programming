#include "main.h"

/**
 * is_prime_number - checks if a character is digit
 * @n: the  value
 * Return: int
 */
int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
 * check - checks if a character is digit
 * @n: the  value
 * @d: d vaue
 * Return: int
 */
int check(int n, int d)
{
	if (d >= n && n > 1)
		return (1)
	if (n % d == 0 || n <= 1)
		return (0)
	return (check(n, d + 1));
}
