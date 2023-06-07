#include "lists.h"

/**
 * print_listint_safe - This function prints a listint_t list
 * @head: Pointer to the first node of the linked list (listint_t)
 *
 * Return: On SUCCESS, returns (nodes) i.e. the number of nodes in the list
 *		   On FAILURE, returns (0) with an exit status of 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		nodes++;
		if (tmp->next >= tmp)
		{
			printf("-> [%p] %d\n", (void *)tmp->next, tmp->next->n);
			exit(98);
		}
		tmp = tmp->next;
	}
	return (nodes);
}
