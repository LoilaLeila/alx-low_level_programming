#include "main.h"
/**
* _print_rev_recursion - prints ther reverse of a string
* @s: string parameter
* Return: (0)
*/
void _print_rev_recursion(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 1; s[i] < j; j++)
			_putchar(s[i]);
	}
	_putchar('\n');
}
