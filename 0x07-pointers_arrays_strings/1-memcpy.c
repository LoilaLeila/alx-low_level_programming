#include "main.h"
/**
* _memcpy - function that copies memory area
* @src: source file parameter
* @dest: destination file parameter
* @n: unsigned int parameter
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

