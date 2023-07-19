#include "main.h"
/**
 * _isalpha - a function that identifies an alphabet
 * @c: parameter
 * Return: (1) (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
