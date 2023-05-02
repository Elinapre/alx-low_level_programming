#include "lists.h"
/**
 * reverse_listint - reverses a linked list element
 * @head: pointer to the first node in the list element
 *
 * Return: pointer to the first node in the new list of element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
