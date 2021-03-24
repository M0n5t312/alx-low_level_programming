#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end of list
 * @head: head of list
 * @n: data to be added to new node
 * Return: null if new node empty else address of list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;
	listint_t *newList = *head;
	int i = 0;
	printf("%i",**head->n);

	if (newList == NULL)
		newList = newNode;
	else
	{
		 while (newList->next != NULL)
		 {
			 newList = newList->next;
			 printf("%i",i++);
		 }
		 newList->next = newNode;
	}
	return (newList);
}
