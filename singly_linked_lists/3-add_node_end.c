#include "lists.h"
#include <string.h>

/**
 * add_node_end - add a new node at the end of the list
 * @head: pointer to the head of the list
 * @str: string to add to the end node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	/*Null safety check*/
	if (!new_node)
		return (NULL);

	if (str)
		{
			new_node->str = strdup(str);
			new_node->len = strlen(str);
			if (!new_node->str)
				{
					free(new_node);
					return (NULL);
				}
		}
	else
		{
			new_node->str = NULL;
		}
	/*This is the last node */
	new_node->next = NULL;

	/*empty list case*/
	if (!(*head))
		*head = new_node;
	else
		{
			current = *head;
			while (current->next)
				current = current->next;
			current->next = new_node;
		}

	return (new_node);
}
