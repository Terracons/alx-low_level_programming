#include "lists.h"

/**
 * free_dlistint - frees  dlistint_t list.
 * @head: the first node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *dump;

	dump = head;
	if (head != NULL)
	{
		while (dump != NULL)
		{
			temp = dump;
			dump = dump->next;
			free(temp);
		}
		free(dump);
	}
}
