#include "lists.h"

/**
 * free_list - This function frees the list_t list
 * @head: A pointer to the first node of the list_t list
 *
 * Return: Returns void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
