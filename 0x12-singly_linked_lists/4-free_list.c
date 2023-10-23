#include "lists.h"
/**
*free_list - frees a list of nodes
*@head: head of the node
*/
void free_list(list_t *head)
{
	list_t *tempo;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tempo = head->next;
		free(head->str);
		free(head);
		head = tempo;
	}
	free(head->str);
	free(head);


}

