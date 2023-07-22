#include "main.h"
/**
* print_line - function that draws a srtaight line
* @n: parameter
* Return: (0) (Success)
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
			_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
