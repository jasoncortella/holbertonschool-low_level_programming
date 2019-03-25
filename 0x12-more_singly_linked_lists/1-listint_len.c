#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: the input listint_t list
 *
 * Return: the number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		/*
		 * if (!h->n)
		 * printf("%d\n", h->n, "(nil)");
		 * else
		 * printf("%d\n", h->n);
		 */
		h = h->next;
	}
	return (i);
}
