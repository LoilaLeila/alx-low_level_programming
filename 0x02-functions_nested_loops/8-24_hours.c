#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 * Return: (0) (Success)
 */
void jack_bauer(void)
{
	int j;
	int i;

	for (j = 0; j < 24; j++)
	{
		for (i = 0; i < 60; i++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar('\n');
		}
	}
}
