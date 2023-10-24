#include "lists.h"
/**
*sum_listint - a function that returns the sum of all the data (n) of a list
*@head: node head
*Return: sum of all the data
*/
int sum_listint(listint_t *head)
{
	listint_t *tempo = head;
	int sum = 0;

	while (tempo)
	{
		sum = sum + tempo->n;
		tempo = tempo->next;
	}

	return (sum);
}
