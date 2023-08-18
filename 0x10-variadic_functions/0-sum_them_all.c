#include "variadic_functions.h"
/**
* sum_them_all - a function that returns a sum of ints
* @n: number of arguments
* Return: sum of arguments or 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list ar;

	if (n == 0)
		return (0);
	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ar, const unsigned int);
	}
	return (sum);
}
