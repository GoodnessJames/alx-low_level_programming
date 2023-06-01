#include "lists.h"

/**
 * add_node_end - This function adds a new node at the end of a list_t
 * @head: Pointer to a pointer to the linked list (list_t)
 * @str: Pointer to the string to be duplicated
 *
 * Return: On SUCCESS, returns (endNode) i.e. the address of the new element
 *		   On FAILURE, returns (NULL) which signifies an error
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *strDup;
	list_t *endNode, *tmp;

	endNode = malloc(sizeof(list_t));
	if (endNode == NULL)
		return (NULL);
	strDup = strdup(str);
	if (strDup == NULL)
	{
		free(endNode);
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
		len++;
	endNode->str = strDup;
	endNode->len = len;
	endNode->next = NULL;
	if (*head == NULL)
		*head = endNode;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = endNode;
	}
	return (endNode);
}
