#include "lists.h"
/**
*print_listint - prints all the elements of a listint_t list.
*@h: node head
*Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t elements;

	if (h == NULL)
		return (0);
	for (elements = 0; h != NULL; elements++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (elements);





}
