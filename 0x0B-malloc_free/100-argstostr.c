#include "main.h"
#include <string.h>

/**
 * argstostr - checks if a character is lowercase
 * @ac: the string
 * @av: args
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int index = 0;
	char *result;
	int i;
	int j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < ac; j++)
	{
		total_length += strlen(av[j]) + 1;
	}

	result = (char *)malloc((sizeof(char) * total_length) + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		strcpy(result + index, av[i]);
		index += strlen(av[i]);
		result[index++] = '\n';
	}

	return (result);

}
