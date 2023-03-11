#include "lists.h"

/**
 * free_list -  frees a list_t list
 *
 * @head: first node in the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	while (head)
	{
		list_t *current;

		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}

