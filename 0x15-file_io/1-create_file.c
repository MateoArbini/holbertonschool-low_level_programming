#include "main.h"
/**
 *create_file - function that creates a file
 *@filename: name of the file to create
 *@text_content: content of the file
 *Return: If the funciont fails, return -1, if it works return 1
 *In this function, what we do is to create a file, and the we
 *asign the text_content to it. First, we create the file asigning
 *the correspondant permissions, and we add the O_TRUNC flag,
 *that corresponds to the case that the file already existed.
 *For this case, we should use the srlen function in order to
 *know the length of the string to asing to the file, and then
 *we use the write function. At the end, we must close the
 *fd, which is the file descriptor, and return 1, which
 *corresponds to the null character
 **/
int create_file(const char *filename, char *text_content)
{
	int length;
	int write_validator;
	int fd = open(filename, O_CREAT | O_RDONLY | O_WRONLY | O_TRUNC, 0600);

	if (filename == NULL)
	{
		close(fd);
		return (-1);
	}

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	length = strlen(text_content);

	write_validator = write(fd, text_content, length);

	if (write_validator == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
