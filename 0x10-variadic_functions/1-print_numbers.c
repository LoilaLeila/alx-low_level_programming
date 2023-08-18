#include "variadic_functions.h"
/**
* print_numbers - function that prints numbers
* @separator: separates numbers
* @n: number of arguments
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(arg, unsigned int));
			if (i != n - 1)
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(arg, unsigned int));
	}
	printf("\n");
	va_end(arg);
}
