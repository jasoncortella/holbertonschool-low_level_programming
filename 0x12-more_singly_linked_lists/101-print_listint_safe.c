#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a listint_t list
 * @head: the input listint_t list
 *
 * Return: the number of nodes.
 */

size_t print_listint_safe(const listint_t *head)
{
	uint i = 1, j;
	const listint_t *tmp = head, *check;

	if (!tmp)
		exit(98);
	for (; tmp; i++)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
		check = head;
		for (j = 0; j < i; j++)
		{
			if (tmp == check)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (i);
			}
			check = check->next;
		}
	}
	return (i);
}
