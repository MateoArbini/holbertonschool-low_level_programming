#include "main.h"
/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename: name of the file to create
 *@text_content: content of the file
 *Return: If the funciont fails, return -1, if it works return 1
 *What we do in this case, is to append a string to a file. So in order to do
 *that, we use the flags WRONLY and APPEND, so we enter to the file,
 *and append the information to it. It is very similar to the previous
 *excercise, but the only difference, is that we use other flags, and there
 *are some other conditions.
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int length;
	int write_validator;
	int fd = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
	{
		return (-1);
	}

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
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
