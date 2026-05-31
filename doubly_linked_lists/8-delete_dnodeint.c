#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Deletes number at the given index
 *
 * @head: the start of the list
 * @index: index to delete at
 *
 * Returns: negative number on failure and nonzero if successfull
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i = 0;

	/* head or pointer to head should be valid pointer*/
	if (!(head) || !(*head))
		return (-1);

	curr = *head;

	/*removing the head*/
	if (index == 0)
		{
			*head = curr->next;
			if (*head)
				(*head)->prev = NULL;
			free(curr);
			return (1);
		}

	/*Go to the index i am looking for*/
	while (curr->next && i < index)
		{
			curr = curr->next;
			i++;
		}

	/*index is out of our bounds of the list*/
	if (!curr)
		return (-1);

	if (curr->next)
		curr->next->prev = curr->prev;
	if (curr->prev)
		curr->prev->next = curr->next;

	free(curr);
	return (1);
}
