#include "main.h"
/**
* append_text_to_file- appens text at the end of a file
* @filename: pointer parameter
* @text_content: pointer parameter
* Return: int
*/
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = NULL;

	if (filename == NULL || text_content == NULL)
		return (-1);
	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);
	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);
}
