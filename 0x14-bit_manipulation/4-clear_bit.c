#include "main.h"
/**
* clear_bit - a function that sets value to 0 at given index
* @n: bit parameter
* @index: beginning of a bit
* Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
