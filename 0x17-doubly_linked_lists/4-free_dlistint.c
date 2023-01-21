#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head node
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node = NULL;

	if (head == NULL)
		return;

	next_node = head->next;
	head->next = NULL;
	head->prev = NULL;
	free(head);
	free_dlistint(next_node);
}
