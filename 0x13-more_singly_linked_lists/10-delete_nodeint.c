#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at index index of a listint_t
* @head: Singly linked list
* @index: Int
*
* Return: 1 or -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp, *h = *head;

	if (!h)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}
	while (a < index - 1)
	{
		if (!(h->next))
			return (-1);
		h = h->next;
		a++;
	}
	temp = h->next;
	h->next = temp->next;
	free(temp);
	return (1);
}
