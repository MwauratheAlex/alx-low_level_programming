#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 *
 * @head: points to the first node
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *current_head = (*head);
	int n;

	if ((!head) || !(*head))
		return (-1);

	n = (*head)->n;

	(*head) = (*head)->next;
	free(current_head);

	return (n);
}

