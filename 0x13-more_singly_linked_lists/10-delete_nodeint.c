#include "lists.h"
/**
*delete_nodeint_at_index - deletes the node at index index of a list
*@head: node head
*@index: node index to be delete
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tempo = *head;
	listint_t *position = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tempo || !(tempo->next))
		return (-1);
	tempo = tempo->next;
		i++;
	}

	position = tempo->next;
	tempo->next = position->next;
	free(position);

	return (1);
}
