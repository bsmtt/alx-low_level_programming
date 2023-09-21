#include "main.h"
#include <ctype.h>

/**
 * _strcmp - check the code
 * @str: second variable
 * Return: Always void.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		ptr++;
	}
	return str;
}
