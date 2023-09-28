#include "main.h"

/**
 * _print_rev_recursion - checks if a character is digit
 * @s: the character to check
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}

	_print_rev_recursion(s + 1);
	printf("%c", *s);
}
