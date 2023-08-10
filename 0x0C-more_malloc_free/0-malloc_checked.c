#include "main.h"
/**
* malloc_checked - allocates memory using malloc
* @b: parameter
* Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);
	if (result == NULL)
		exit(98);
	else
		return (result);
}
