#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 *                            dlistint_t linked list.
 * @head: Pointer to the head of the list
 * @index: The point of insertion
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (!current)
		return (-1);
	if (!index)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (; index; index--, current = current->next)
		if (!current->next)
			return (-1);
	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
