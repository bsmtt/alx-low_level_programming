#include "main.h"

/**
 * _strpbrk - cpy memory byte
 * @s:first variable
 * @accept: second variable
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		int i = 0;

		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
				return (s);

			i++;
		}
		s++;
	}
	return (NULL);
}
