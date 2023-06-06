#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t
 * @head: Pointer to the first node of the list
 * @index: The index of the node that should be deleted. Index starts at 0
 *
 * Return: On SUCCESS, return (1)
 *		   On FAILURE, return (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cp = *head;
	unsigned int node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cp);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (cp->next == NULL)
			return (-1);
		cp = cp->next;
	}
	tmp = cp->next;
	cp->next = tmp->next;
	free(tmp);

	return (1);
}
