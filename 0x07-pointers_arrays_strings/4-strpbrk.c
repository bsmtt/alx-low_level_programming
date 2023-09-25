#include "main.h"

/**
 * _strpbrk - cpy memory byte
 * @s:first variable
 * @accept: second variable
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s >= '\0')
	{
		while (*accept >= '\0')
		{
			if (*accept == *s)
				return (s);

			accept++;
		}
		s++;
	}
	return (NULL);
}
