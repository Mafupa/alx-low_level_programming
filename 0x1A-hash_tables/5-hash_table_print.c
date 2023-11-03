#include "hash_tables.h"

/**
 * hash_table_print - prints a hash tables content
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;
	int flag = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (flag == 1)
				printf(",");
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}

