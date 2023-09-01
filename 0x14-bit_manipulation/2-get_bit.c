#include "main.h"
/**
* get_bit - function that returns the nth bit
* @n: the number of bit
* @index: the begining of the bit
* Return: the nth bit or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
