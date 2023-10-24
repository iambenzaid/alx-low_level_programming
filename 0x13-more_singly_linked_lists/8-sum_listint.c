#include "lists.h"
/**
* sum_listint- function that returns the sum of all the data (n) of a listint_t
* @head: Singly linked list
*
* Return: Sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *h;

	if (!head)
		return (0);
	h = head;
	while (h)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
