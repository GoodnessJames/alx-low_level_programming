#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to the first node of the linked list (listint_t)
 * @idx: The index of the list where the new node should be added
 * @n: Integer
 *
 * Return: On SUCCESS, return (newNode)
 *		   On FAILURE, return (NULL)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tmp = *head;
	unsigned int node;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = tmp;
		*head = newNode;
		return (newNode);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	newNode->next = tmp->next;
	tmp->next = newNode;

	return (newNode);
}
