#include "main.h"

/**
 * _isalpha - checks if a character is lowercase
 * @c: the character to check
 *
 * Return: 1 if the character is alpha, 0 otherwis
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
