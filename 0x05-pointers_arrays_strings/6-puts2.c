#include "main.h"

/**
 * puts2 - check the code
 * @str: start point
 * Return: Always void.
 */
void puts2(char *str)
{
	int i = 0;
	int l = strlen(str);

	while (i < l)
	{
		printf("%c", str[i]);
		i += 2;
	}

	printf("\n");

}
