#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: parameter
* @argv: parameter
* Return: 1 or 0
*/
int main(int argc, char *argv[])
{
	int i, j, results;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	results = i * j;

	printf("%d\n", results);
	return (0);
}


