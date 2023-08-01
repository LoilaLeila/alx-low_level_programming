#include "main.h"
/**
* _strspn - a function that gets the length of a prefix substring
* @s: pointer parameter
* @accept: another pointer parameter
* Return: number of bytes in initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
