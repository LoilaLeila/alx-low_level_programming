#include "main.h"
/**
* set_bit - a function that sets the value of a bit to 1 at a given index.
* @n: pointer value of a bit
* @index: the point at which index is set
* Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	return (-1);
	mask  = 1UL << index;
	*n |= mask;
	return (1);
}
