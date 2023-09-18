#include "main.h"

/**
 * _strcpy - check the code
 * @dest: first variable
 * @src: second variable
 * Return: Always void.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
