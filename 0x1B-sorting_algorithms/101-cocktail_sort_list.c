#include "sort.h"

/**
 * cocktail_sort_list - sorts a doubly linked list of integers in
 *                      ascending order using the Cocktail sort algorithm
 * @list: doubly linked list of integers
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *head = *list, *tail, *current = *list;
	bool swap = true;

	if (!list || !*list || !(*list)->next)
		return;
	for (; current->next; tail = current)
		current = current->next;
	while (swap)
	{
		swap = false, current = head;
		while (current != tail && current->prev != tail)
		{
			if (current->n <= current->next->n)
				current = current->next;
			else
			{
				swap_next(&current), print_list(*list);
				swap = true;
			}
		}
		if (current->prev != tail)
			tail = tail->prev;
		current = tail;
		if (tail->prev != NULL)
			tail = tail->prev;
		while (current != head && current->next != head)
		{
			if (current->n >= current->prev->n)
				current = current->prev;
			else
			{
				swap_prev(&current);
				if (current->next == *list)
					*list = current;
				print_list(*list), swap = true;
			}
		}
		if (current->next != head)
			head = head->next;
	}
}

/**
 * swap_next - swaps a node of a linked list with it's next node
 * @node: node to define swap point
 */
void swap_next(listint_t **node)
{
	listint_t *current, *next, *prev, *next2;

	current = *node;
	next = current->next;
	prev = current->prev;
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
}

/**
 * swap_prev - swaps a node of a linked list with it's previous node
 * @node: node to define swap point
 */
void swap_prev(listint_t **node)
{
	listint_t *current, *next, *prev, *next2;

	current = *node;
	current = current->prev;
	next = current->next;
	prev = current->prev;
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
}
