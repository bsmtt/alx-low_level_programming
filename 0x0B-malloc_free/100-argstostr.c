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

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	
	for (int i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	result = (char *)malloc(total_length * sizeof(char));
	if (result == NULL)
	{
		return NULL;
	}
	
	for (i = 0; i < ac; i++)
	{
		strcpy(result + index, av[i]);
		index += strlen(av[i]);
		result[index++] = '\n';
	}

	return result;

}
