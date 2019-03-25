#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the input listint_t list
 * @index: the specified node
 *
 * Return: the specified node, or NULL if the specified node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	for (; index; index--)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
	}
	return (head);
}
