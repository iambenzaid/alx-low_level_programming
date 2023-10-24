#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list
* and returns the head node’s data (n)* @head: Singly linked list
*
* Return: Int
*/

int pop_listint(listint_t **head)
{
	listint_t *h;
	int a;

	if (!(*head))
		return (0);
	h = (*head)->next;
	a = (*head)->n;
	free(*head);
	*head = h;
	return (a);
}
