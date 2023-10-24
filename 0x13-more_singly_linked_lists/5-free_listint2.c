#include "lists.h"
/**
*free_listint2 -  frees a listint_t list and sets the head to NULL
*@head: node head
*Return: Always (0)
*/

void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL || (*head) == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tempo = (*head)->next;
		free(*head);
		*head = tempo;
	}
	free(*head);
	*head = NULL;


}
