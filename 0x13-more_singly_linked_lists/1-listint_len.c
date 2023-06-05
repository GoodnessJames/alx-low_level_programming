#include "lists.h"

/**
 * listint_len - Returns the number of elements in the linked listint_t list
 * @h: Pointer to the linked list (listint_t)
 *
 * Return: ALWAYS return (elements) which is the number of elements of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;
	const listint_t *tmp;

	if (h == NULL)
		return (elements);
	tmp = h;
	while (tmp)
	{
		elements++;
		tmp = tmp->next;
	}
	return (elements);
}
