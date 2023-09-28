#include "main.h"

/**
 * _strlen_recursion - checks if a character is digit
 * @s: the character to check
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
