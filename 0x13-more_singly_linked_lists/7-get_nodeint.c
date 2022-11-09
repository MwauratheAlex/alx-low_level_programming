#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: points to the first node
 *
 * @index: index of the nth node
 *
 * Return: the nth node of a listint_t linked list
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);

	while (head && count < index)
	{
		head = head->next;
		count++;
	}

	return (head);
}
