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
	dlistint_t *new =  malloc(sizeof(dlistint_t)), *current = *h;
	unsigned int i = 0;

	for (; i < idx - 1 && current; i++)
		current = current->next;
	if (current || idx == 0 || i == idx - 1)
	{
		new->n = n;
		new->next = idx ? current->next : *h;
		new->prev = idx ? current : NULL;
		idx ? (current->next = new) : (*h = new);
		if (new->next)
			new->next->prev = new;
		return (new);
	}
	return (NULL);
}
