#include "main.h"
/**
* reverse_array - reverses an array
*@a: parameter
*@n: parameter
*Return: (0)
*/
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
