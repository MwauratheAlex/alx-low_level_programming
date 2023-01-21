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
	dlistint_t *current_node, *next_node, *new_node;
	unsigned int i;

	current_node = *h;

	for (i = 0; i < idx - 1; i++)
	{
		current_node = current_node->next;
		if (current_node == NULL && i < idx - 1)
			return (NULL);
	}

	next_node = current_node->next;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	current_node->next = new_node;
	new_node->prev = current_node;
	new_node->n = n;
	new_node->next = next_node;

	return (new_node);
}
