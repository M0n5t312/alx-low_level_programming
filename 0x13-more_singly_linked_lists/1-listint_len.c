#include "lists.h"
/**
 * listint_len - lists length of list
 * @h: list
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
