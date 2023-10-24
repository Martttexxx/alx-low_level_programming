#include "lists.h"
/**
*pop_listint -  deletes the head node of a listint_t linked list
*@head: head node
*Return: the head node’s data (n) or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int n;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;

	return (n);
}
