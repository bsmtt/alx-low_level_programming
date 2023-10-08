#include "main.h"
#include <string.h>

/**
 * _calloc - checks if a character is lowercase
 * @sie: the string
 * @nmemb : concat
 * Return: char
 */
char *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}


	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		memset(ptr, 0, nmemb * size);
	}


	return (ptr);
}
