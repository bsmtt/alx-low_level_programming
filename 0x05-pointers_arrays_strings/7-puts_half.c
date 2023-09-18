#include "main.h"

/**
 * puts_half - check the code
 * @str: start point
 * Return: Always void.
 */
void puts_half(char *str)
{
	int ls;
	int l = strlen(str);

	if (l % 2 == 0)
	{
		ls = l / 2;
	}
	else
	{
		ls = (l + 1) / 2;
	}

	while (ls < l)
	{
		printf("%c", str[ls]);
		ls++;
	}

	printf("\n");

}
