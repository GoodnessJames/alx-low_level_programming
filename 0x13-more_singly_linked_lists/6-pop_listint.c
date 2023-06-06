#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: A pointer to the first node of the listint_t list
 *
 * Return: On SUCCESS, return (save) which is the stored value of the head node
 *		   On FAILURE, return (0)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int save;

	if (*head == NULL)
		return (0);

	tmp = *head;
	save = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (save);
}
