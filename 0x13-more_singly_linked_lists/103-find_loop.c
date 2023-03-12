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
	if (fast == slow)
		return (slow);
	while (fast)
	{
		slow = slow->next;
		fast = fast->next;
		if (fast == slow)
			break;
	}
	return (fast);
}
