#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a listint_t list
 * @head: the input listint_t list
 *
 * Return: the number of nodes.
 */

size_t print_listint_safe(const listint_t *head)
{
	uint i = 0, j;
	const listint_t *current = head, *check;

	while (current)
	{
		i++;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		check = head;
		for (j = 0; j < i; j++)
		{
			if (current != check)
				check = check->next;
			else
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (i);
			}
		}
	}
	return (i);
}
