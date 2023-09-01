#include "main.h"
/**
* binary_to_uint -  function that converts a binary number to an unsigned int
* @b: a pointer to a string
* Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int cnvt = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		cnvt = cnvt * 2 + (*b - '0');
		b++;
	}
	return (cnvt);
}
