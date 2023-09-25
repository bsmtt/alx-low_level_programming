#include "main.h"

/**
 * _memcpy - copy memory byte
 * @dest:first variable
 * @src: second variable
 * @n: count
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return s;
		}
		s++;
	}
	return NULL;
}
