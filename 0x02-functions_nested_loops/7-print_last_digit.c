#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer
 * @a: parameter
 * Return: the value of the last digit
 */
int print_last_digit(int a)
{
	int l;

	l = a % 10;

	if (a < 0)
		l = -l;

	_putchar(l + '0');
	return (l);
}
