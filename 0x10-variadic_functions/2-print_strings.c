#include "variadic_functions.h"
/**
* print_strings - a function that prints strings
* @separator: separates strings
* @n: shows the number of strings
* Return: void, nil
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (arg == NULL)
			printf("Nil");
		if (separator != NULL)
		{
			printf("%s", va_arg(arg, char*));
			if (i != n - 1)
				printf("%s", separator);
		}
		else
			printf("%s", va_arg(arg, char*));
	}
	printf("\n");
	va_end(arg);
}
