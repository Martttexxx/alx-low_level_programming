#include "lists.h"
/**
*add_nodeint - adds a new node at the beginning of a listint_t list
*@head: node head
*@n: new integer
*Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addnode;

	if (head == NULL)
		return (0);

	addnode = malloc(sizeof(listint_t));
	if (addnode == NULL)
		return (NULL);
	if (*head == NULL)
		addnode->next = NULL;
	else
		addnode->next = *head;
	addnode->n = n;
	*head = addnode;

	return (*head);



}
