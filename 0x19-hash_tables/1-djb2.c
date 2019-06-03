#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing the djb2 algorithm
 * @str: input string to apply the algorithm to
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	/* Provided hash algo */
	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
