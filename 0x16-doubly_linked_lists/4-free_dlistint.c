#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: Pointer to the head of the list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *current = head;

	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}
