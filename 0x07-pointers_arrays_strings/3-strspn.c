#include "main.h"

/**
 * _strspn - cpy memory byte
 * @s:first variable
 * @accept: second variable
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s != '\0')
	{
		found = 0;
		int i;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
