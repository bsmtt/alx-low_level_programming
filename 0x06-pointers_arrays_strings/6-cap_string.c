#include "main.h"

/**
 * cap_string - check the code
 * @str: second variable
 * Return: Always void.
 */
char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (isspace(*ptr) 
		|| ispunct(*ptr)
		|| *ptr == '\n'
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
		|| *ptr == '\t')
		{
			char next_char = *(ptr + 1);

			*(ptr + 1) = toupper(next_char);
		}
		ptr++;
	}
	return (str);
}
