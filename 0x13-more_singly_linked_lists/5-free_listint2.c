#include "lists.h"
/**
* free_listint2 - function that frees a listint_t list
* @head: Head of a list
*
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (!head)
		return;
	while (*head != NULL)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
	}
}
