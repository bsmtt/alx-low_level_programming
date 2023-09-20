#include "main.h"

/**
 * strncat - check the code
 * @dest: first variable
 * @src: second variable
 * @n : count
 * Return: Always void.
 */
char *strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
