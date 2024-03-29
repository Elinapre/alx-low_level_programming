#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of  linked list of an element
 * @head: pointer to the first node in the head list of an element
 * @n: data to insert in that new node of integer
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	new->next = *head;

	*head = new;

	return (new);
}
