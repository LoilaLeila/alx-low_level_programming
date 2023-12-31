#include "main.h"
/**
* create_file - a function that creates a file
* @filename: pointer parameter
* @text_content: pointer parameter
* Return: 0,-1, no water
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t text_length;
	long int bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		text_length = strlen(text_content);
		bytes_written = write(fd, text_content, text_length);
		if (bytes_written == -1L)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
