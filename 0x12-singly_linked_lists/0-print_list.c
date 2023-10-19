#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			unsigned int len = 0;
			unsigned int i;

			while (h->str[len] != '\0')
				len++;

			for (i = 0; i < len; i++)
				_putchar(h->str[i]);
			_putchar('\n');
		}
		else
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
		}
		count++;
		h = h->next;
	}

	return (count);
}
