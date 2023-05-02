#include "lists.h"

/**
 * print_listint - print the element of a linked list struct
 * @h: linked list of type listint_t to print all element in struct
 *
 * Return: number of nodes of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
