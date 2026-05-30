#include "lists.h"
/**
 * free_list - frees the list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *next_node;

	/*list is already empty*/
	if (!head)
		return;

	while (head)
		{
			next_node = head->next;

			/*free the data*/
			if (head->str)
				free(head->str);

			free(head);
			head = next_node;
		}
}
