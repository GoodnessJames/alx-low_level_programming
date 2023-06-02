#include "lists.h"

/**
 * print_list - This function prints all the elements of a list_t list
 * @h: Pointer to the linked list (list_t)
 *
 * Return: On SUCCESS, returns (nodes) which is the number of nodes
 *		   On FAILURE, returns (-1) which signifies an error
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *tmp;

	tmp = h;
	while (tmp)
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
