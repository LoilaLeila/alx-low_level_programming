#include "function_pointers.h"
/**
* print_name - a function that prints names
* @name: pointer parameter
* @f: function pointer parameter
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
