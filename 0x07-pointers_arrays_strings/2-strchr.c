#include "main.h"

/**
 * _strchr - cpy memory byte
 * @s:first variable
 * @c: second variable
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
