#include <stdio.h>
/**
* main - entry point
* @argc: parameter
* @argv: parameter
* Return: (0)
*/
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("Program name is: %s\n", argv[0]);
	}
	else
	{
		printf("Unable to get program name\n");
	}
	return (0);
}


