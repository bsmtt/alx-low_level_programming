#include "main.h"

/**
 * _memset - check the code
 * @s: second variable
 * @b: btyte
 * @n: count
 * Return: Always void.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
