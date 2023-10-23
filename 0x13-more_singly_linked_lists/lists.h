#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_t - A structure representing a node in a linked list.
 * @n: The data stored in the node.
 * @next: A pointer to the next node in the list.
 */
typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif
