#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to the linked list (list_t)
 *
 * Return: ALWAYS return (elements) which is the number of elements of the list
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;
	const list_t *tmp;

	if (h == NULL)
		return (elements);
	tmp = h;
	while (tmp != NULL)
	{
		elements++;
		tmp = tmp->next;
	}
	return (elements);
}
