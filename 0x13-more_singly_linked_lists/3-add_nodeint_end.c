#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: ponter to the first node
 *
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr, *new_node;

	ptr = *head;
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new_node;
	return (new_node);
}

