#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the input listint_t list
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		/*
		 * if (!h->n)
		 * printf("%d\n", h->n, "(nil)");
		 * else
		 */
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
