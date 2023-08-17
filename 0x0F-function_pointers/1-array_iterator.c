#include "function_pointers.h"
/**
* array_iterator - a function that itereates over an array
* @array: an array pointer
* @size: a pointer parameter
* @action: a pointer parameter
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
