#include "main.h"
/**
* _strchr - a function that locates a character in a string
* @s: a pointer parameter
* @c: character parameter
* Return: s or NULL
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
			s++;
	}
	if (*s ==c)
		return (s);
	return (NULL);
}
