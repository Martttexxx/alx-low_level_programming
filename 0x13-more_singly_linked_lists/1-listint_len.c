#include "lists.h"
/**
*listint_len -  counts the number of elements in a linked listint_t list
*@h: node head
*Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t elements;

	if (h == NULL)
		return (0);
	for (elements = 0; h != NULL; elements++)
	{
		h = h->next;
	}
	return (elements);




}
