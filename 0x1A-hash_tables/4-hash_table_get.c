#include "hash_tables.h"

/**
 * hash_table_get - returns an element from a hash table with it's key
 * @ht: hash table
 * @key: key
 * Return: value of the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx])
		return (ht->array[idx]->value);
	return (NULL);
}
