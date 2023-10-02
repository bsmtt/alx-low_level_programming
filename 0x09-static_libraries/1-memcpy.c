#include "main.h"

/**
 * _memcpy - copy memory byte
 * @dest:first variable
 * @src: second variable
 * @n: count
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
