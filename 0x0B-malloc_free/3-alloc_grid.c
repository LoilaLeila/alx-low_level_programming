#include "main.h"
/**
* alloc_grid - returns a pointer to an array of integers
* @width: parameter
* @height: parameter
* Return: NULL, pointer
*/
int **alloc_grid(int width, int height)
{
	int **output;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		output[x] = malloc(sizeof(int) * width);

		if (output[x] == NULL)
		{
			for (; x >= 0; x--)
				free(output[x]);

			free(output);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			output[x][y] = 0;
	}
	return (output);
}
