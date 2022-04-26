#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t linked list
 * @head: head poiter
 * @index: index of the node
 * Return: the index node of node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *pTempNode = NULL;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		head = head->next;
		count++;

		if (count == index)
		{
			pTempNode = head;
		}
		else
		{
			return (NULL);
		}
	}
	return (pTempNode);
}

