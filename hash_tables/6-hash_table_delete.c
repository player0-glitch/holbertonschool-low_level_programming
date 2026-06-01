#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *curr_node = NULL;
	hash_node_t *next_node = NULL;

	if (!ht)
		return;

	/*go through all the buckets*/
	for (idx = 0; idx < ht->size; ++idx)
		{
			curr_node = ht->array[idx];
			/*delete the chain at that index*/
			while (curr_node)
				{
					/*hold on to next value to prevent
					 * dangling pointer*/
					next_node = curr_node->next;

					free(curr_node->value);
					free(curr_node->key);
					free(curr_node);

					curr_node = next_node;
				}
		}
	free(ht->array);
	free(ht);
}
