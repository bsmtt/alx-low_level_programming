#include "main.h"

/**
 * cap_string - check the code
 * @str: second variable
 * Return: Always void.
 */
char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		char next_char = *(ptr + 1);

		if (*ptr == '\n'
		|| *ptr == '.'
		|| *ptr == ','
		|| *ptr == ';'
		|| *ptr == '!'
		|| *ptr == '?'
		|| *ptr == '"'
		|| *ptr == '('
		|| *ptr == ')'
		|| *ptr == '{'
		|| *ptr == '}'
		|| *ptr == ' '
		|| *ptr == '\t')
		{
			if (islower(next_char) == 1)
			{
				*(ptr + 1) = toupper(next_char);
			}
		}
		else
		{
			*(ptr + 1) = tolower(next_char);
		}
		ptr++;
	}
	return (str);
}
