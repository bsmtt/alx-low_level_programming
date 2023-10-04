#include "main.h"
#include <string.h>

/**
 * str_concat - checks if a character is lowercase
 * @str: the string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;

	if (s1 == NULL)
	{
		return ("");
	}
	
	if (s2 == NULL)
	{
		return ("");
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
