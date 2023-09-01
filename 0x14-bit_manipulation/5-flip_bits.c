#include "main.h"
/**
* flip_bits - a function that returns the number of bits you would need to flip
* @n: bit parameter
* @m: bit parameter
* Return: unsigned int
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR_rslt = n ^ m;
	unsigned int cnt = 0;

	while (XOR_rslt)
	{
		XOR_rslt &= (XOR_rslt - 1);
		cnt++;
	}
	return (cnt);
}
