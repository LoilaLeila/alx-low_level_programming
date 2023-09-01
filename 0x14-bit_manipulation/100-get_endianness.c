#include "main.h"
/**
* get_endianness - a function that checks the endianess
* Return: 0 or 1
*/
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *ptr;

	ptr = (unsigned char *)&num;
	if (*ptr == 1)
		return (1);
	else
		return (0);
}
