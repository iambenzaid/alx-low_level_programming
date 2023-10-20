#include "lists.h"
/**
* list_len - function that returns the number of elements
* in a linked list_t list
* @h: Singly linked lists
*
* Return: Number of elements in the list
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		h = h->next;
		i++;
	}
	return (i);
}
