#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Pointer to the head of the list
 * @idx: The point of insertion
 * @n: The value of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i = 0;

	for (; i < idx - 1 && current; i++)
		current = current->next;
	if (current || idx == 0 || i == idx - 1)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		if (idx == 0)
		{
			new->next = *h;
			new->prev = NULL;
			*h = new;
		}
		else
		{
			new->next = current->next;
			new->prev = current;
			current->next = new;
		}
/*		new->next = idx ? current->next : *h; */
/*		new->prev = idx ? current : NULL; */
/*		idx ? (current->next = new) : (*h = new); */
		return (new);
	}
	return (NULL);
}
