#include "lists.h"

/**
 * free_listint - This function frees the listint_t list
 * @head: A pointer to the first node of the listint_t list
 *
 * Return: Return nothing (void)
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
