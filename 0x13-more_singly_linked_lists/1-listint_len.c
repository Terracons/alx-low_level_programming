#include <stdio.h>
#include "lists.h"

/**
 * listint_len - print
 * list of link
 * @h: head of the list
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);

}
