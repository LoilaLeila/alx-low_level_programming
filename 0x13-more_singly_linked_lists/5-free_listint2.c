#include "lists.h"
/**
* free_listint2 - a function that frees a list
* @head: a pointers pointer
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
