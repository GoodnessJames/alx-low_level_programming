#include "lists.h"

/**
 * add_node - This function adds a new node at the beginning of a list_t list
 * @head: Pointer to a pointer to the linked list (list_t)
 * @str: Pointer to the string to be duplicated
 *
 * Return: On SUCCESS, returns (newNode) i.e. the address of the new element
 *		   On FAILURE, returns (NULL) which signifies an error
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *strDup;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	strDup = strdup(str);
	if (strDup == NULL)
	{
		free(newNode);
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
		len++;
	newNode->str = strDup;
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

