#include "main.h"

/**
 * _strcmp - check the code
 * @s1: first variable
 * @s2: second variable
 * Return: Always void.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
