#include "main.h"

/**
 * print_rev - check the code
 * @s: start point
 * Return: Always void.
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int i = length - 1;
	int j = 0;
	char t;

	while (i >= 0 && j < length)
	{
		t = s[j];
		s[j] = s[i];
		s[i] = t;
		j++;
		i--;
	}

}
