#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head node
 *
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 *
 * @n: integer
 *
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node = NULL;
	unsigned int i;

	if (*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	current_node = *h;

	for (i = 0; i < idx; i++)
	{
		if (n > (int)idx - 1)
			return (NULL);
		if (current_node->next == NULL)
		{
			new_node->prev = current_node;
			current_node->next = new_node;
			return (new_node);
		}
		current_node = current_node->next;
	}
	if (current_node->prev == NULL)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	
	new_node->next = current_node;
	new_node->prev = current_node->prev;
	current_node->prev->next = new_node;
	current_node->prev = new_node;

	return (new_node);
}
