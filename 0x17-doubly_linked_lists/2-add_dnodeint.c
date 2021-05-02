#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning of list
 * @head: pointer head of list
 * @n: data to be added to list
 * Return: addrress of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head = malloc(sizeof(dlistint_t));

	new_head->n = n;
	new_head->prev = NULL;
	new_head->next = *head;

	*head = new_head;

	return (*head);
}
