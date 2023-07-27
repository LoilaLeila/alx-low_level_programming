#include "main.h"
/**
* string_toupper - changes all lowercase letters to uppercase
* @n: parameter
* Return: (0)
*/
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 'a' + 'A';
		}
	}
	return (n);
}
