#include "main.h"

/**
 * _isdigit - checks if a character is digit
 * @c: the character to check
 *
 * Return: 1 if the character is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
