#include "lists.h"
#include <stdlib.h>

/**insert_dnodeint_at_index - Inserts a new node at a given position
 *@h: head of the list
 *@idx: the index to insert at
 *@n: value to add
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	/*Inserting at the start*/
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	/*traverse to the index*/
	while (temp != NULL && i < (idx - 1))
		{
			temp = temp->next;
			i++;
		}

	if (temp)
		return (NULL);

	/*end of the list*/
	if (!temp->next)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	/*Null safety check*/
	if (!new_node)
		return (NULL);

	new_node->n = n;
	/*link new node to the list*/
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	temp->next->prev = new_node;

	return (new_node);
}
