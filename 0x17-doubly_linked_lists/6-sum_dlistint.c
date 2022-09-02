#include "lists.h"

/**
 * sum_dlistint - returns the sum of all
 * the data in double link list
 * @head: the hhed of list to sum
 * Return: 0 or NULL
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *sumnode = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (sumnode != NULL)
	{
		sum += sumnode->n;
		sumnode = sumnode->next;
	}
	return (sum);
}
