#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Pointer to a pointer to the linked list (listint_t)
 * @n: Integer
 *
 * Return: On SUCCESS, return (newNode) i.e. the address of the new element
 *		   On FAILURE, return (NULL) which signifies an error
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (head == NULL)
		return (NULL);
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
