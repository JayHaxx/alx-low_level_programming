#include "lists.h"

/**
 * sum_listint - calculate sum of all the data in a listint_t list
 * >head: 1st node in the linked list
 *
 * Return: resulting sum
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;
	
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
