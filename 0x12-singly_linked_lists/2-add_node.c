#include "lists.h"
/**
* add_node - a function that adds new nodes at the beginning of a a list
* @head: pointer to a pointer
* @str: pointer parameter
* Return: address or NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
