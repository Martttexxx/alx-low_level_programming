#include "lists.h"
/**
*free_listint -  function that frees a listint_t list.
*@head: head of node
*Return: Nil
*/

void free_listint(listint_t *head)
{
	listint_t *tempo;

	while ((tempo = head) != NULL)
	{
		head = head->next;
		free(tempo);
	}


}
