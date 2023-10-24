#include "lists.h"
/**
*insert_nodeint_at_index -  inserts a new node at a given position
*@head: node head
*@idx: index to add new node
*@n: info to added in the new node
*Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tempo = *head;
	unsigned int i;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; tempo && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = tempo->next;
			tempo->next = newnode;
				return (newnode);
		}
		else
		tempo = tempo->next;
	}

	return (NULL);
}
