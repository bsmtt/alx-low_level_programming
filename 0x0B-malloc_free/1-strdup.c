#include "main.h"
#include <string.h>

/**
 * _strdup - checks if a character is lowercase
 * @str: the string
 * Return: char
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{i
		return (NULL);
	}

	*duplicate = (char *)malloc(strlen(str) + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
