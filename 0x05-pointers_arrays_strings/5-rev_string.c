#include "main.h"

/**
 * rev_string - check the code
 * @s: start point
 * Return: Always void.
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int i = length - 1;
	int j = 0;
	char t;

	while (j < i)
	{
		t = s[j];
		s[j] = s[i];
		s[i] = t;
		j++;
		i--;
	}

}
