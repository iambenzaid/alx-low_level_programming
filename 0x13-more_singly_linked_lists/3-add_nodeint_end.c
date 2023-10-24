#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: Singly linked list
* @n: Int
*
* Return: Int
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (0);

	new_node->n = n;
	new_node->next = 0;

	if (!(*head))
	{
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
