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
	char *value_copy, *key_copy;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];
	value_copy = strdup(value);
	if (!value_copy)
		return (0);
	key_copy = strdup(key);
	if (!key_copy)
	{
		free(value_copy);
		return (0);
	}

	while (current && strcmp(current->key, key) != 0)
		current = current->next;
	if (current) /* Match found, update value and return */
	{
		current->value = value_copy;
		return (1);
	}

	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
	{
		free(value_copy);
		free(key_copy);
		return (0);
	}
	newNode->key = key_copy;
	newNode->value = value_copy;
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
