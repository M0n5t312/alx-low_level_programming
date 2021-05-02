#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end of list
 * @head: head of list
 * @n: data to be appended
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end = malloc(sizeof(dlistint_t));

	while ((*head) != NULL)
		*head = (*head)->next;
	new_end->n = n;
	new_end->next = NULL;

	if ((*head) == NULL)
		new_end->prev = *head;

	(*head)->next =  new_end;

	return (new_end);
}
