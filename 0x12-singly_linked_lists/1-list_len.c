#include "lists.h"

/**
 * list_len -  returns the number of elements in a linked list_t list
 *
 * @h: list
 *
 * Return:  number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
