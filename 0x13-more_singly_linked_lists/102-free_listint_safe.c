#include "lists.h"

size_t count_listint(listint_t *h);
size_t free_listint_safe(listint_t **h);

/**
 * count_listint - Counts the number of nodes in a listint_t list
 * @h: A pointer to the first node of the linked list (listint_t)
 *
 * Return: On SUCCESS, returns (nodes) i.e. the size of the free'd list
 *		   On FAILURE, returns (0)
 */
size_t count_listint(listint_t *h)
{
	size_t nodes = 0;
	listint_t *tmp;

	if (h == 0 || h->next == 0)
		return (0);
	tmp = h;
	while (tmp)
	{
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}

/**
 * free_listint_safe - This function frees a listint_t list
 * @h: A 2-step pointer to the first node of the linked list (listint_t)
 *
 * Return: On SUCCESS, returns (nodes) i.e. the size of the free'd list
 *		   On FAILURE, returns (0)
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = count_listint(*h);
	listint_t *tmp = *h;
	listint_t *current = 0;

	if (h == 0 || *h == 0)
		return (0);
	while (tmp)
	{
		current = tmp->next;
		free(tmp);
		tmp = current;
	}
	*h = NULL;

	return (nodes);
}
