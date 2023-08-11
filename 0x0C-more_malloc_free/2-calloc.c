#include "main.h"
/**
* _calloc - fuction that allocates memory for an array
* @nmemb: calloc parameter
* @size: calloc parameter
* Return: NULL, pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
