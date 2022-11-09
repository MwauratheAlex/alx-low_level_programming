#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: first node
 *
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	int len = 0;

	current_node = *head;
	while (current_node && current_node->next)
		current_node = current_node->next;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->len = len;
	new_node->next = NULL;


	if (current_node)
		current_node->next = new_node;
	else
		*head = new_node;


	return (new_node);
}

