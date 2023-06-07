#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: A 2-step pointer to the first node of the linked list (listint_t)
 *
 * Return: On SUCCESS, returns (*head) which is a pointer
 *		   to the first node of the reversed list
 *		   On FAILURE, returns (NULL)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode;
	listint_t *currentNode = *head;

	if (head == 0 || (*head) == 0)
		return (0);
	if ((*head)->next == 0)
		return (*head);
	prevNode = 0;
	while (currentNode)
	{
		(*head) = currentNode->next;
		currentNode->next = prevNode;
		prevNode = currentNode;
		currentNode = *head;
	}
	*head = prevNode;

	return (*head);
}
