#include "lists.h"

/**
 * get_last_node - last node
 *
 * @head: pointer to last node
 *
 * Return: pointer to last node in list
 */
listint_t *get_last_node(listint_t *head)
{
	listint_t *fast, *slow, *prev;

	fast = head;
	slow = head;

	while (fast->next && fast->next->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
			break;
	}
	if (fast->next == NULL || fast->next->next == NULL)
		return (NULL);
	slow = head;
	while (fast != slow)
	{
		prev = slow;
		slow = slow->next;
		fast = fast->next;
	}
	return (prev);
}

/**
 * free_listint_safe - frees a listint_t list
 * This function can free lists with a loop
 *
 * @h: pointer to the pointer to the first node
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *head = *h;
	listint_t *current = NULL;
	listint_t *last_node;

	last_node = get_last_node(*h);
	if (last_node)
		last_node->next = NULL;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
		nodes++;
	}
	(*h) = NULL;
	return (nodes);
}
