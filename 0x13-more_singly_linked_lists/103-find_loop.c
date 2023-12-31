#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list
* @head: linked list
*
* Return: address of node or return NULL if loop doesn't start
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (i = head; i != end; i = i->next)
			if (i == end->next)
				return (end->next);
	}

	return (NULL);
}
