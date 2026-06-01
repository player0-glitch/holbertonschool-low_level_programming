#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The hash table to modify.
 * @key: The key string (cannot be empty).
 * @value: The value string associated with the key (must be duplicated).
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node = NULL, *new_node = NULL;
	char *new_val = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	/*Check for value at existing key and update it's value*/
	node = ht->array[idx];
	while (node)
		{
			if (strcmp(node->key, key) == 0)
				{
					new_val = strdup(value);
					if (!new_val)
						return (0);

					/*clear memory before overwritting*/
					free(node->value);
					node->value = new_val;
					return (1);
				}
			/*Chain it to the link*/
			node = node->next;
		}

	/*completely new key*/
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (!new_node->key)
		{
			/*free the node we made since it can't hold null chars*/
			free(new_node);
			return (0);
		}
	new_node->value = strdup(value);
	if (!new_node->value)
		{
			free(new_node->key);
			free(new_node);
			return (0);
		}

	/*Handling hash collisions*/
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
