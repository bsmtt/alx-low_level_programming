#include "main.h"
#include <string.h>

/**
 * str_concat - checks if a character is lowercase
 * @s1: the string
 * @s2 : concat
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = " ";
	}

	if (s2 == NULL)
	{
		s2 = " ";
	}

	concatenated = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (concatenated == NULL)
	{
		return (NULL);
	}

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
