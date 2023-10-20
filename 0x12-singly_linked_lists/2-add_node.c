#include "lists.h"
/**
* add_node - Function that adds a new node at the beginning of a list_t list
* @head: Head of the linked list
* @str: String to store in the list
*
* Return: The address of head
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i = 0;

	new = malloc(sizeof(list_t));
	if (new == 0)
		return (0);

	new->str = strdup(str);

	while (str[i])
		i++;

	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
