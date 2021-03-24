#include "lists.h"
/**
 * add_nodeint - adds node at the beginning of list
 * @head: head of list
 * @n: data
 * Return: pointer to list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return NULL;
	else
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
}
