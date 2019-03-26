#include "lists.h"

/**
 * rverse_listint - reverses a listint_t linked list
 * @head: the input listint_t list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *tmp;

	current = *head;
	while (current->next)
	{
		tmp = current->next;
		current->next = tmp->next;
		tmp->next = *head;
		*head = tmp;
	}
	return (*head);
}
