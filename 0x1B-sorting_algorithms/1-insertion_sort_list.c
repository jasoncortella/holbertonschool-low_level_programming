#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 *                       ascending order using the Insertion sort algorithm
 * @list: doubly linked list of integers
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next, *prev, *next2;
	bool swap = true;

	if (!list || !*list || !(*list)->next)
		return;
	while (swap)
	{
		swap = false;
		for (current = *list; current->next; current = current->next)
		{
			if (current->n > current->next->n)
			{
				next = current->next;
				if (next->next)
					next2 = next->next;
				else
					next2 = NULL;
				prev = current->prev;
				current->prev = next;
				current->next = next2;
				next->prev = prev;
				next->next = current;
				if (next2)
					next2->prev = current;
				if (prev)
					prev->next = next;
				if (!next->prev)
					*list = next;
				print_list(*list);
				swap = true;
				break;
			}
		}
	}
}
