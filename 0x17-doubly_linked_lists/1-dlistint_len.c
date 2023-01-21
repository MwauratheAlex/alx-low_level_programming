#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list
 *
 * @h: head node
 *
 * Return:  number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);

	while (h)
	{
		if (h == NULL)
			break;
		h = h->next;
		len++;
	}
	return (len);
}
