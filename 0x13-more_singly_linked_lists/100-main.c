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

    head = NULL;
    add_nodeint_end(&head, 98);
    print_listint(head);
    reverse_listint(&head);
    print_listint(head);    
    free_listint2(&head);
    return (0);
}
