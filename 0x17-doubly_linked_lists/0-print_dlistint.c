#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: head node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (size);

	while (h)
	{
		if (h == NULL)
			break;
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
