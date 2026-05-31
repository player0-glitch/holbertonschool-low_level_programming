#include "lists.h"

/**
 * dlistint_len - Print length of the list
 * @h: pointer to the head of the list
 *
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	while (h)
		{
			count++;
			h = h->next;
		}
	return (count);
}
