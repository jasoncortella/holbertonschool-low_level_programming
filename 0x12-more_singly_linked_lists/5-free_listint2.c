#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, and sets head to NULL
 * @head: the input listint_t list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	if (!head)
		return;
	current = *head;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*head = NULL;
}
