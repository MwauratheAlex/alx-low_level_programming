#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: pointer to pointer to first node
 *
 * Return:a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if ((*head) == NULL || (*head)->next == NULL)
		return (*head);

	prev = NULL;
	next = NULL;

	while ((*head)->next)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		(*head) = next;
	}
	next->next = prev;

	return (*head);
}
