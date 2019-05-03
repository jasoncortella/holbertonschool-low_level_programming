#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the list
 * @n: The value of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (new->next)
		new->next->prev = new;
	*head = new;
	return (new);
}
