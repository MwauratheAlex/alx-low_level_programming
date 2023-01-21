#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 6);
    add_dnodeint_end(&head, 9);
    add_dnodeint_end(&head, 22);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 7, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
