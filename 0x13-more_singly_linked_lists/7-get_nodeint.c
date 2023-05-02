#include "lists.h"
/**
 * get_nodeint_at_index - returns the node of  a certain index
 * @head: first node in the linked list of an element
 * @index: index of the node to returns
 *
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}


