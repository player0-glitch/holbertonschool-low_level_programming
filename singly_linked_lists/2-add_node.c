#include "lists.h"
#include <string.h>

/**
 * _strlen -  length of a string
 * @s: string to count length of
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated and stored in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!(head))
		{
			return (NULL);
		}
	/*create space for the new node*/
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	if (str)
		{
			new_node->str = strdup(str);
			new_node->len = _strlen(str);

			if (!(new_node->str))
				{
					free(new_node);
					return (NULL);
				}
		}
	else
		{
			new_node->str = NULL;
			new_node->len = 0;
		}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
