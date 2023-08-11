#include "main.h"
/**
* array_range - a function that creates an array of integers
* @min: parameter
* @max: parameter
* Return: NULL, pointer
*/
int *array_range(int min, int max)
{
	int *str;
	int i;

	if (min > max)
		return (NULL);
	str = malloc(sizeof(int) * (max - min + 1));
		if (str == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		str[i - min] = i;
	return (str);
}
