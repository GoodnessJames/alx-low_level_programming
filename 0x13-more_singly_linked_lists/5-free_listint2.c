#include "lists.h"

/**
 * free_listint2 - This function frees the listint2_t list
 * @head: A pointer to the first node of the listint2_t list
 *
 * Return: Return nothing (void)
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
