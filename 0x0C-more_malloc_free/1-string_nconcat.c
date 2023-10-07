#include "main.h"
#include <string.h>

/**
 * string_nconcat - checks if a character is lowercase
 * @s1: the string
 * @s2 : concat
 * @n : count
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	concatenated = malloc((strlen(s1) + n + 1) * sizeof(char));
	if (concatenated == NULL)
	{
		return (NULL);
	}

	strcpy(concatenated, s1);
	strncat(concatenated, s2, n);

	return (concatenated);
}
