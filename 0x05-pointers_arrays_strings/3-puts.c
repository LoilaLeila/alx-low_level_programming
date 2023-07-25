#include "main.h"
/**
* _puts - prints string to stdout
*@str: character string
*Return: to stdout
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
