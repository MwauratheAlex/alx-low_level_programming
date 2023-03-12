#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *node;

    head = NULL;
    node = add_nodeint(&head, 6);
    node->next = add_nodeint(&head, 9);
    print_listint_safe(head);
    free_listint_safe(&head);
    printf("%p\n", (void *)head);
    return (0);
}
