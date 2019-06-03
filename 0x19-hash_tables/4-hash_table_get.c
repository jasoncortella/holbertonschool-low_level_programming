#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element
 *         NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current && strcmp(current->key, key) != 0)
	{
		current = current->next;
	}
	if (current)
		return (current->value);
	return (NULL);
}
