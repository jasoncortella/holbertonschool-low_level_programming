#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: the input listint_t list
 *
 * Return: the address of the node where the loop starts, or
 * NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current = head, *check;

	if (!head)
		return (NULL);
	if (head == head->next)
		return (head);
	while (current)
	{
		current = current->next;
		check = head;
		while (current && check != current)
		{
			if (current->next != check)
				check = check->next;
			else
				return (check);
		}
	}
	return (current);
}
