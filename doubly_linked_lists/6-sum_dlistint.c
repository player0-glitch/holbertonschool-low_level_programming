#include "lists.h"

/**
 * sum_dlistint - sum the numbers in the list
 * @h: pointer to the head of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (!head)
		return (i);

	while (head)
		{
			i += head->n;
			head = head->next;
		}
	return (i);
}
