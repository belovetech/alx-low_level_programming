#include "lists.h"

/**
 * insert_nodeint_at_index - insets a new node at the given position
 * @head: reference to head pointer
 * @idx: index of the list
 * @n: new data to insert
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *ptmp_node = NULL;
	listint_t *new_node = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	if (idx)
	{
		ptmp_node = *head;
		for (count = 0; (count < idx - 1 && (ptmp_node != NULL)); count++)
		{
			ptmp_node = ptmp_node->next;
		}
	}

	if (ptmp_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node != NULL)
		{
			new_node->n = n;

			new_node->next = ptmp_node->next;

			ptmp_node->next = new_node;
		}
		else
			return (NULL);
	}
	return (new_node);
}

