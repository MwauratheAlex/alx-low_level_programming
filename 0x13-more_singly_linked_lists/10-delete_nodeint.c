#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 *
 * @head: pointsto the first node in the list
 *
 * @index: position
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int count = 0;

	if (!head || !(*head))
		return (-1);

	current = *head;
	previous = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	else
	{
		while (count < index)
		{
			previous = current;
			current = current->next;
			index--;
		}
	}

	previous->next = current->next;

	return (1);
}

