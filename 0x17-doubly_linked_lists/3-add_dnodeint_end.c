#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list dlistint_t.
 * @head: dlistint_t list to add the node
 * @n: number of the new node
 * Return: the new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	*node_b4_add = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (node_b4_add->next != NULL)
			node_b4_add = node_b4_add->next;
		new->next = NULL;
		new->prev = node_b4_add;
		node_b4_add->next = new;
	}
	return (new);
}
