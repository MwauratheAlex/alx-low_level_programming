#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: head node
 *
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node = NULL;

	current_node = *head;

	while (current_node && current_node->next)
		current_node = current_node->next;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current_node;
	new_node->next = NULL;

	if (current_node)
		current_node->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
