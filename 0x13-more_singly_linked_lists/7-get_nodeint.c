#include "lists.h"
/**
*get_nodeint_at_index - a function that returns the nth node of a list
*@head: node head
*@index: node index to be returned
*Return: NULL or pointer to the nodee
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	 listint_t *tempo = head;
	 unsigned int i = 0;

	while (tempo && i < index)
	{
		tempo = tempo->next;
		i++;
	}

	return (tempo ? tempo : NULL);
}


