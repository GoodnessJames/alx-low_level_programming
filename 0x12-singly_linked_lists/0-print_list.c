#include "lists.h"

/**
 * print_list - This function prints all the elements of a list_t list
 * @h: Pointer to the linked list (list_t)
 *
 * Return: ALWAYS return (nodes) which is the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *tmp;

	if (h == NULL)
		return (nodes);
	tmp = h;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", tmp->len, tmp->str);
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
