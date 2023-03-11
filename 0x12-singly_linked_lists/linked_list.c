#include <stdio.h>
#include <stdlib.h>


struct node
{
	int value;
	struct node *next;
};

typedef struct node node;

void add_node(node **head, int value)
{
	node *new_node = malloc(sizeof(node));
	node *temp;
	new_node->next = NULL;
	new_node->value = value;
	if (*head == NULL)
	{
		*head = new_node;
		return;
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
}

int main(void)
{
	node *head = NULL;
	node *temp, *current;
	add_node(&head, 65);
	add_node(&head, 66);
	add_node(&head, 67);
	add_node(&head, 68);
	add_node(&head, 69);
	add_node(&head, 650);

	add_node(&head, 651);
	add_node(&head, 651);
	add_node(&head, 651);
	add_node(&head, 651);
	add_node(&head, 651);
	add_node(&head, 651);
	add_node(&head, 6512);
	temp = head;

	current = head;
	free(current);
	head = head->next;
	printf("%d\n", head->next->value);
	printf("head -> ");
	while (temp)
	{
		printf("%d%s", temp->value, temp->next ? " -> " : " -> NULL\n");
		temp = temp->next;
	}

	return (0);
}
