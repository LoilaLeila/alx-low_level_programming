#include "main.h"
/**
  * _isupper - this function checks for uppercase letters
  *@c: parameter
  *Return: 0 or 1 (Success)
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

