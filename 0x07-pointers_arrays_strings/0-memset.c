#include "main.h"
/**
* _memset - fuction that fills memory with a constant byte
* @s: pointer parameter
* @b: constant byte character
* @n: unsigned int parameter
* Return: (s)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
