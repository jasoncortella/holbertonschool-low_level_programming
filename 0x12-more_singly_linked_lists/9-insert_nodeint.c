#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the input listint_t list
 * @idx: the index of the list where the new node should be added
 * @n: the value of the new node's int
 *
 * Return: the specified node, or NULL if the specified node does not exist
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *newNode;

	if (!head || !*head)
		return (NULL);
	tmp = *head;
	for (; idx - 1 > 0; idx--)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = tmp->next;
		tmp->next = newNode;
	}
	return (newNode);
}
