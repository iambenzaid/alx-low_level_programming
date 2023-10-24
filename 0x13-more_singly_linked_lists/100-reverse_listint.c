#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list
* @head: Singly linked list
*
* Return: Ptr of new head of new linked list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev = NULL, *next_node;

	if (!head || !(*head) || !((*head)->next))
		return (*head);

	current = *head;

	while (current)
	{
		next_node = current->next;
		current->next = prev;
		prev = current;
		current = next_node;
	}

	*head = prev;

	return (*head);
}
