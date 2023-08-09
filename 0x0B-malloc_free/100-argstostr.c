#include "main.h"
/**
* argstostr - concatenates all arguments
* @ac: parameter
* @av: parameter
* Return: Null, or pointer
*/
char *argstostr(int ac, char **av)
{
	int i;
	int totallength = 0;
	char *result;
	int position = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		totallength += strlen(av[i]) + 1;
	result = malloc(sizeof(char) * totallength);

	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strcpy(result + position, av[i]);
		position += strlen(av[i]);
		result[position++] = '\n';
	}
	result[position] = '\0';
	return (result);
}
