#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of the listint_t list
 * @head: Pointer to the first node of the listint_t list
 * @n: Integer
 *
 * Return: On SUCCESS, return (endNode) i.e. the address of the new element
 *		   On FAILURE, return (NULL) which signifies an error
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode, *tmp;

	endNode = malloc(sizeof(listint_t));
	if (endNode == NULL)
		return (NULL);
	endNode->n = n;
	endNode->next = NULL;
	if (*head == NULL)
		*head = endNode;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = endNode;
	}
	return (endNode);
}
