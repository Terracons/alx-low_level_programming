#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print
 * list of link
 * @h: head of the list
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);

}
