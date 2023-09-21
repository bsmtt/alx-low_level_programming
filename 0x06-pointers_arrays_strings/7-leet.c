#include "main.h"

/**
 * leet - check the code
 * @str: second variable
 * Return: Always void.
 */
char *leet(char *str)
{
	char *ptr = str;
	int i;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "4433007711";

	while (*ptr)
	{
		for (i = 0; i < 10; i++)
		{
			if (*ptr == leet_chars[i])
			{
				*ptr = leet_nums[i];
			}
			break;
		}
		*ptr++;
	}
	return (str);
}
