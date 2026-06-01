#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element, or NULL if not found.
 */
char *hash_table_get(hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node = NULL;

	/* make sure we're getting value ADT*/
	if (!(ht) || !(key))
		return (NULL);

	/*get index*/
	idx = key_index((unsigned char *)key, ht->size);

	/*traverse chain at index*/
	node = ht->array[idx];
	while (node)
		{
			/*head of the chain is the value we're looking for*/
			if (strcmp(node->key, key) == 0)
				return (node->value);
			node = node->next;
		}
	return (NULL);
}
