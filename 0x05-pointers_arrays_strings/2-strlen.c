#include "main.h"

/**
 * _strlen - check the code
 * @s: second variable
 * Return: Always void.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
