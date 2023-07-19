#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 * Return: (0) (Success)
 */
void times_table(void)
{
	int n, m, result;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			result = n * m;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
