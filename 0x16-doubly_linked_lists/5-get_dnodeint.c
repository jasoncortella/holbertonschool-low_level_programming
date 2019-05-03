#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list
 * @index: The specified node
 * Return: the address of the specified node, or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	for (; index && head->next; index--)
		head = head->next;
	if (index)
		return (NULL);
	return (head);
}
