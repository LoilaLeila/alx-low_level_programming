#include "main.h"
/**
* _strlen - finds the length of a string
* @s: parameter for string
* Return: (0) (Success)
*/
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
