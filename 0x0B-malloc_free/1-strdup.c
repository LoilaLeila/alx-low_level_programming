#include "main.h"
/**
* _strdup - a function that returns a pointer to memory
* @str: a string parameter
* Return: NULL or a pointer
*/
char *_strdup(char *str)
{
	char *copy;
	int length = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		length++;

	copy = malloc(sizeof(char) * length + 1);

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	return (copy);
}
