#include "lists.h"

/**
 * free_listint_safe - frees all the elements of a listint_t list
 * @hh: the input listint_t list
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	uint i = 0, j;
	listint_t *current = *h, *tmp, *check;

	while (current)
	{
		i++;
		tmp = current;
		current = current->next;
		free(tmp);
		check = *h;
		for (j = 0; j < i; j++)
		{
			if (current != check)
				check = check->next;
			else
			{
				*h = NULL;
				return (i);
			}
		}
	}
	*h = NULL;
	return (i);
}
