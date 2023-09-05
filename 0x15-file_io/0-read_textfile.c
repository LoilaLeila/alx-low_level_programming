#include "main.h"
/**
* read_textfile - a function that reads a text file and prints it
* @filename: pointer parameter
* @letters: parameter
* Return: 0 or NULL
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	size_t bytes_read;
	size_t bytes_written;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytes_read = fread(buffer, 1, letters, file);
	if (bytes_read == 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	buffer[bytes_read] = '\0';
	bytes_written = fwrite(buffer, 1, bytes_read, stdout);
	if (bytes_written != bytes_read)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (bytes_written);
}
