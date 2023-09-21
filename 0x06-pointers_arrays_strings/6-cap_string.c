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
		while (!(*ptr >= 'a' && *ptr <= 'z'))
		{
			ptr++;
		}
		char next_char = *(ptr);

		if (*ptr - 1 == '\n'
		|| *ptr - 1 == '.'
		|| *ptr - 1 == ','
		|| *ptr - 1 == ';'
		|| *ptr - 1 == '!'
		|| *ptr - 1 == '?'
		|| *ptr - 1 == '"'
		|| *ptr - 1 == '('
		|| *ptr - 1 == ')'
		|| *ptr - 1 == '{'
		|| *ptr - 1 == '}'
		|| *ptr - 1 == ' '
		|| *ptr - 1 == '\t')
		{
			*(ptr) = toupper(next_char);
		}
		ptr++;
	}
	return (str);
}
