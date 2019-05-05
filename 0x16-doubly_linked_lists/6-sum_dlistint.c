#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 *                of a dlistint_t linked list.
 * @head: Pointer to the head of the list
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;
	return (sum);
}
