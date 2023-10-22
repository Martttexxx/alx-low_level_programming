#include "lists.h"

/**
*add_node - adds a new node at the beginnin of a list
*@head: node head
*@str: string to be stored
*Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *firstnode;
	unsigned int i, nums = 0;

	firstnode = malloc(sizeof(list_t));
	if (firstnode == NULL)
		return (NULL);
	firstnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		nums++;
	firstnode->len = nums;
	firstnode->next = *head;
	*head = firstnode;

	return (*head);

}

