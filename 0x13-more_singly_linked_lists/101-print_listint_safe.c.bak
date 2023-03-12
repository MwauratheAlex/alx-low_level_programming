#include "lists.h"

/**
 * get_loop - finds the beginning of a loop in a linked list
 *
 * @head: pointer to first node
 *
 * Return: a pointer to the first node in the loop, or
 * NULL if no loop is found
 */
listint_t *get_loop(listint_t *head)
{
	listint_t *fast, *slow;

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
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (fast);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * This function can print lists with a loop
 *
 * @head: pointer to the first node
 *
 * Return: the number of nodes in the list
 * If the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *loop_start;
	size_t nodes = 0;
	int flag = 0;

	loop_start = get_loop((listint_t *)head);

	while (head && flag < 2)
	{
		nodes++;
		if (head == loop_start)
			flag++;
		printf("%s[%p] %d\n", flag == 2 ? "-> " : "", (void *)head, head->n);
		head = head->next;
	}
	return (nodes);
}
