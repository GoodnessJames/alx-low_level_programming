#include "lists.h"

size_t count_listint_nodes(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * count_listint_nodes - Counts the number of nodes in a linked list
 * @head: A pointer to the first node of the listint_t
 *
 * Return: On SUCCESS, returns (nodes) i.e. the number of nodes in the list
 *         On FAILURE, returns (0)
 */
size_t count_listint_nodes(listint_t *head)
{
	listint_t *tmp1, *tmp2;
	size_t nodes = 1;

	if (head == 0 || head->next == 0)
		return (0);

	tmp1 = head->next;
	tmp2 = (head->next)->next;

	while (tmp2)
	{
		if (tmp1 == tmp2)
		{
			tmp1 = head;
			while (tmp1 != tmp2)
			{
				nodes++;
				tmp1 = tmp1->next;
				tmp2 = tmp2->next;
			}

			tmp1 = tmp1->next;
			while (tmp1 != tmp2)
			{
				nodes++;
				tmp1 = tmp1->next;
			}

			return (nodes);
		}

		tmp1 = tmp1->next;
		tmp2 = (tmp2->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A step pointer to the first node of the linked list
 *
 * Return: Returns (nodes) i.e. the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, i;

	nodes = count_listint_nodes(*h);

	if (nodes == 0)
	{
		while (h != 0 && *h != 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			nodes++;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
