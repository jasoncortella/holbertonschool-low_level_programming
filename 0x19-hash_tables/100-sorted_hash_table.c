#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: Pointer to the newly created hash table
 *         NULL if an error occurred
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(shash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 on success
 *         0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{

	unsigned long int index;
	shash_node_t *current, *newNode;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size), current = ht->shead;
	while (current && strcmp(current->key, key) != 0) /* Look for key */
		current = current->snext;
	if (current) /* Match found, update value and return */
	{	free(current->value), current->value = strdup(value);
		return (1); }
	newNode = malloc(sizeof(shash_node_t));
	if (!newNode)
		return (0);
	newNode->key = strdup(key), newNode->value = strdup(value);
	newNode->next = ht->array[index], ht->array[index] = newNode;
	if (!ht->shead)
	{
		newNode->sprev = NULL, newNode->snext = NULL;
		ht->shead = newNode, ht->stail = newNode;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		newNode->sprev = NULL, newNode->snext = ht->shead;
		newNode->snext->sprev = newNode, ht->shead = newNode;
	}
	else
	{
		current = ht->shead;
		while (current->snext && strcmp(current->snext->key, key) < 0)
			current = current->snext;
		newNode->sprev = current, newNode->snext = current->snext;
		if (newNode->snext)
			newNode->snext->sprev = newNode;
		else
			ht->stail = newNode;
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element
 *         NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	current = ht->shead;
	while (current && strcmp(current->key, key) != 0)
		current = current->snext;
	if (current)
		return (current->value);
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: the hash table
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = ht->shead;

	if (!ht)
		return;
	printf("{");
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current)
			printf(", ");
		else
			printf("}\n");
	}
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: the hash table
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = ht->stail;

	if (!ht)
		return;
	printf("{");
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current)
			printf(", ");
		else
			printf("}\n");
	}

}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: the hash table
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *next;

	if (!ht)
		return;
	current = ht->shead;
	while (current)
	{
		next = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}
	free(ht->array);
	free(ht);
}
