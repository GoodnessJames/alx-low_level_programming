#include "lists.h"

size_t count_listint_nodes(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * count_listint_nodes - Counts the number of nodes in listint_t list
 * @head: Pointer to the first node of the listint_t
 *
 * Return: On SUCCESS, returns (nodes) i.e the number of nodes in the list
 *         On FAILURE, returns (0)
 */
size_t count_listint_nodes(const listint_t *head)
{
	const listint_t *tmp1, *tmp2;
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
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the first node of the listint_t list.
 *
 * Return: Returns (nodes) i.e the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = count_listint_nodes(head);

	if (nodes == 0)
	{
		while (head != 0)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
