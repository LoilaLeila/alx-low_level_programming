#include "lists.h"
/**
* free_listint - a function that frees a list
* @head: a pointers pointer
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *temp;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
