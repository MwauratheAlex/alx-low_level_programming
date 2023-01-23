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
	dlistint_t *new_node, *node_at_idx = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	node_at_idx = *h;
	if (node_at_idx == NULL)
	{
		*h = new_node;
		return (new_node);
	}

	while (i < idx && node_at_idx->next)
	{
		node_at_idx = node_at_idx->next;
		i++;
	}
	if (idx > i + 1)
		return (NULL);
	if (!node_at_idx->next && idx != i)
	{
		node_at_idx->next = new_node;
		new_node->prev = node_at_idx;
		return (new_node);
	}
	new_node->next = node_at_idx;
	if (node_at_idx->prev)
	{
		new_node->prev = node_at_idx->prev;
		node_at_idx->prev->next = new_node;
	}
	else
		(*h) = new_node;
	node_at_idx->prev = new_node;
	return (new_node);
}
