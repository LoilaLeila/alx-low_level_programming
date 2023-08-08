#include "main.h"
/**
* str_concat - a function that concatenates two strings
* @s1: string parameter
* @s2: string parameter
* Return: NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i;
	int count1 = 0;
	int	count2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		count1++;
	for (i = 0; s2[i] != '\0'; i++)
		count2++;
	arr = malloc(sizeof(char) * (count1 + count2) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		arr[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		arr[count1 + i] = s2[i];
	return (arr);
}
