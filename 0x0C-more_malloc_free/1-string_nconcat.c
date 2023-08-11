#include "main.h"
/**
* string_nconcat - function that concatenates two strings
* @s1: string parameter
* @s2: string parameter
* @n: parameter
* Return: NULL, pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int s1len = 0;
	unsigned int s2len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	str = malloc(sizeof(char) * (s1len + n) + 1);

	if (str == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			str[s1len + i] = s2[i];
		str[s1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (i = 0; i < n; i++)
			str[s1len + i] = s2[i];
		str[s1len + i] = '\0';
	}
	return (str);
}
