#include "lists.h"

/**
*list_len - finds the number of elements in a list
*@h: node head
*Return: length of the node
*/

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);



}
