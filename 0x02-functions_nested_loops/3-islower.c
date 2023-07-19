#include "main.h"
/**
 * _islower - a fuction that checks for lower case characters
 * @c: parameter to be checked
 * Return: (1) (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
