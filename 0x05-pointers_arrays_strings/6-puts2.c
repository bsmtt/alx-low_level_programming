#include "main.h"

/**
 * puts2 - check the code
 * @str: start point
 * Return: Always void.
 */
void puts2(char *str)
{
	int i = 0;

	while (i < strlen(str))
	{
		printf("%c", str[i]);
		i += 2;
	}

	printf("\n");

}
