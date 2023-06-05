#include "lists.h"

/**
 * print_listint - This function prints all the elements of a listint_t list
 * @h: Pointer to the linked list (listint_t)
 *
 * Return: ALWAYS return (nodes); which is the number of nodes of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;
	const listint_t *tmp;

	if (h == NULL)
		return (elements);
	tmp = h;
	while (tmp != NULL)
	{
		elements++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (elements);
}
