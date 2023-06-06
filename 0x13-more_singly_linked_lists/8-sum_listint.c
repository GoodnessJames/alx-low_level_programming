#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: Pointer to the first node of the linked list (listint_t)
 *
 * Return: On SUCCESS, return (sum)
 *		   On FAILURE, return (0)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	tmp = head;
	if (head == NULL)
		return (0);
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
