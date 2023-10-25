#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Double pointer to the head of the linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	if (*head == NULL || (*head)->next == NULL)
		return *head;

	listint_t *new_head = reverse_listint_helper(*head, (*head)->next);
	(*head)->next = NULL;
	return new_head;
}

/**
 * reverse_listint_helper - Recursive helper function to reverse a listint_t linked list.
 * @prev: Pointer to the previous node.
 * @current: Pointer to the current node.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint_helper(listint_t *prev, listint_t *current)
{
	if (current->next == NULL)
	{
		current->next = prev;
		return current;
	}

	listint_t *next = current->next;

	current->next = prev;

	return reverse_listint_helper(current, next);
}
