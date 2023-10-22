#include "lists.h"

/**
  *add_node_end -  adds a new node at the end of a list_t list
  *@head: node head
  *@str: string to be stored
  *Return: the address of the new element, or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endnode, *tempo;
	unsigned int i, nums = 0;

	endnode = malloc(sizeof(list_t));
	if (endnode == NULL)
		return (NULL);
	endnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		nums++;
	endnode->len = nums;
	endnode->next = NULL;
	tempo = *head;

	if (tempo == NULL)
		*head = endnode;
	else
	{
		while (tempo->next != NULL)
			tempo = tempo->next;
		tempo->next = endnode;
	}
	return (*head);

}
