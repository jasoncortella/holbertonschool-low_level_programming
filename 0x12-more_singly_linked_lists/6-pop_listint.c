#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head note's data
 * @head: the input listint_t list
 *
 * Return: the deleted head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (!*head)
		return (0);
	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (data);
}
