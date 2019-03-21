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
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the list_t list
 * @str: the node to add
 *
 * Return: the address of the new element, or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *last;

	if (!str)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = _strlen(newNode->str);
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
