#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	bool flag = false;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == true)
				printf(", ");
			current = ht->array[i];
			for(; current; current = current->next)
			{
				printf("'%s': '%s'", current->key, current->value);
				if (current->next)
					printf(", ");
			}
			flag = true;
		}
	}
	printf("}\n");
}
