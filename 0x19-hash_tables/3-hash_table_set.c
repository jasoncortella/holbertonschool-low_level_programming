#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 on success
 *         0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current, *newNode;

	if (!ht || !key || !*key)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current && strcmp(current->key, key) != 0)
		current = current->next;
	if (current) /* Match found, update value and return */
	{
		current->value = strdup(value);
		return (1);
	}
	newNode = malloc(sizeof(hash_table_t));
	if (!newNode)
		return (0);
	newNode->key = strdup(key);
	if (!newNode->key)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (!newNode->value)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}
	newNode->next = current;
	ht->array[index] = newNode;
	return (1);
}
