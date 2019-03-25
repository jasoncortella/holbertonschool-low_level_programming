#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to be chacked
 *
 * Return: the length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: the list_t list
 * @n: the value of the integer in the node to add
 *
 * Return: the address of the new element, or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *last;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	last = *head;
	while (last->next)
		last = last->next;
	last->next = newNode;
	return (newNode);
}
