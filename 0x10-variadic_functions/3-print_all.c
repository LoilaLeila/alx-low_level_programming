#include "variadic_functions.h"
/**
* print_all - a function that prints anything
* @format: a list of types passed to the argument
* Return: void
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *arg, *rep = "";

	va_list all;

	va_start(all, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", rep, va_arg(all, int));
						break;
				case 'i':
					printf("%s%d", rep, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", rep, va_arg(all, double));
					break;
				case 's':
					arg = va_arg(all, char *);
					if (!arg)
						arg = "(nil)";
					printf("%s%s", rep, arg);
					break;
				default:
					i++;
				continue;
			}
			rep = ", ";
			i++;
		}
	}
		printf("\n");
		va_end(all);
}
