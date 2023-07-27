#include "main.h"
/**
* _strncat - a function that concatenates two strings
* @dest: a string parameter
* @src: a string parameter
* @n: a parameter
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char destlen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destlen++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[destlen + i] = *src;
		src++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
