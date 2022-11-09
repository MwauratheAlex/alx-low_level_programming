#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: points to the first node
 *
 * @idx: position
 *
 * @n: integer
 *
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node = *head, *new_node;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (current_node && count < idx - 1)
	{
		current_node = current_node->next;
		count++;
	}


	if (current_node->next)
		new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}

