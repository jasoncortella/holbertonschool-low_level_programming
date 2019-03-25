#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a new node at a given position
 * @head: the input listint_t list
 * @index: the index of the list where the new node should be added
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;

	current = *head;
	if (!current)
		return (-1);
	if (!index)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (; index; index--)
	{
		if (!current->next)
			return (-1);
		prev = current;
		current = current->next;
	}
	prev->next = current->next;
	free(current);
	return (1);
}
