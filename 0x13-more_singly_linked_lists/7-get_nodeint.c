#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the first node of the linked list (listint_t)
 * @index: The index of the node, starting at 0
 *
 * Return: On SUCCESS, return (nthNode)
 *		   On FAILURE, return (NULL)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;
	listint_t *nthNode;

	if (head == NULL)
		return (NULL);
	nthNode = head;
	for (node = 0; node < index; node++)
	{
		if (nthNode == NULL)
			return (NULL);
		nthNode = nthNode->next;
	}
	return (nthNode);
}
