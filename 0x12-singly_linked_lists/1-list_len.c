#include "lists.h"
/**
* list_len - Afunction that returns the number of elements
* @h: pointer parameter
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		h = h->next;
		numb++;
	}
	return (numb);
}
