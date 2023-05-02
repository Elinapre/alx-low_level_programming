#include "lists.h"

/**
 * listint_len - return the numbers of element in a linked lists struct
 * @h: linked list of type listint_t to cut through
 *
 * Return: number of nodes in the element
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

