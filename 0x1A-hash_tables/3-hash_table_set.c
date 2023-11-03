#include "hash_tables.h"

/**
 * hash_table_set - set's a hash table node
 * @ht: hash table
 * @key: key of the node to add
 * @value: value of the node
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int idx, i;
	hash_node_t *new;
	char *new_val;

	if (!ht || !key || !value)
		return (0);
	new_val = strdup(value);
	if (!new_val)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = new_val;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(new_val);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = new_val;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
