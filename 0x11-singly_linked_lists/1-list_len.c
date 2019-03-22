#include "lists.h"

/**
 * list_len - returns the elements in a linked list_t list
 * @h: the input list_t list
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
