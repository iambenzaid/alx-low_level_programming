#include "lists.h"
/**
* get_nodeint_at_index - function that returns the nth node of a listint_t
* @head: Singly linked list
* @index: Int
*
* Return: 0
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h;

	if (!head)
		return (0);
	h = head;
	while (h)
	{
		if (i == index)
			return (h);
		i++;
		h = h->next;
	}
	return (0);
}
