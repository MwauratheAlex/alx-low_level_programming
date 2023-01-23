#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list
 *
 * @head: head node
 *
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_at_idx = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	node_at_idx = (*head);
	while (i < index && node_at_idx)
	{
		node_at_idx = node_at_idx->next;
		i++;
	}
	if (!node_at_idx)
		return (-1);
	if (node_at_idx->prev && node_at_idx->next)
	{
		node_at_idx->prev->next = node_at_idx->next;
		node_at_idx->next->prev = node_at_idx->prev;
		node_at_idx->prev = NULL;
	}
	else if (node_at_idx->next)
	{
		(*head) = node_at_idx->next;
		node_at_idx->next->prev = NULL;
		node_at_idx->next = NULL;
	}
	else if (!node_at_idx->next && !node_at_idx->prev)
		(*head) = NULL;
	else
	{
		node_at_idx->prev->next = NULL;
		node_at_idx->prev = NULL;
	}
	free(node_at_idx);
	return (1);
}
