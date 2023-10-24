#include "lists.h"
/**
*add_nodeint_end - adds a new node at the end of a listint_t list
*@head: head of node
*@n: new node to be added
*Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode, *tempo;

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
		return (NULL);
	endnode->n = n;
	endnode->next = NULL;
	tempo = *head;
	if (*head == NULL)
	{
		*head = endnode;
	}
	else
	{
		while (tempo->next != NULL)
		{
			tempo = tempo->next;
		}
		tempo->next = endnode;
	}
	return (*head);

}
