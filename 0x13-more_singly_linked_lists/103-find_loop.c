#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: A pointer to the first node of a linked list (listint_t)
 *
 * Return: On SUCCESS, returns (tmp1) i.e. the address of the node
 *		   where the loop starts
 *		   On FAILURE, returns (NULL) to signify there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp1, *tmp2;

	if (head == 0 || head->next == 0)
		return (NULL);
	tmp1 = head->next;
	tmp2 = (head->next)->next;
	while (tmp2 && tmp2->next)
	{
		if (tmp1 == tmp2)
			break;
		tmp1 = tmp1->next;
		tmp2 = (tmp2->next)->next;
	}
	if (tmp1 != tmp2)
		return (NULL);
	tmp1 = head;
	while (tmp1 != tmp2)
	{
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}
	return (tmp1);
}
