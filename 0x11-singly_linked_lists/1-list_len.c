#include "lists.h"

/**
 * list_len - returns the elements in a linked list_t list
 * @h: the input list_t list
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *s;
	unsigned int i;

	s = h;
	for (i = 0; s; i++)
	{
		s = s->next;
	}
	return (i);
}
