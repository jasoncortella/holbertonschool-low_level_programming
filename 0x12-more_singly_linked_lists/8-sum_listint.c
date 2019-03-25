#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list
 * @head: the input listint_t list
 *
 * Return: the sum of the data in head
 */

int sum_listint(listint_t *head)
{
	int returnSum = 0;

	while (head)
	{
		returnSum += head->n;
		head = head->next;
	}
	return (returnSum);
}
