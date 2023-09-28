#include "main.h"

/**
 * _puts_recursion - checks if a character is digit
 * @s: the character to check
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}

	printf("%c", *s);
	_puts_recursion(s + 1);
}
