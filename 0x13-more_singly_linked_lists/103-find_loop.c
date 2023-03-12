#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: pointer to the first node
 *
 * Return: The address of the node where the loop starts
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	if (head == NULL)
		return (NULL);

	fast = head;
	slow = head;

	while (1)
	{
		slow = slow->next;
		if (fast->next && fast->next->next)
			fast = fast->next->next;
		else
			return (NULL);
		if (fast == slow)
			break;
	}
	slow = head;
	while(1)
	{
		if (fast == slow)
			return (fast);
	}
	return (NULL);
}
