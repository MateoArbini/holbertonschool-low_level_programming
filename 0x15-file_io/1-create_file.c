#include "main.h"
/**
 *create_file - sdsd
 *@filename: fdns
 *@text_content: saoídhsf
 *Return: 1
 **/
int create_file(const char *filename, char *text_content)
{
	int length;
	int write_validator;
	int fd = open(filename, O_CREAT | O_RDONLY | O_WRONLY | O_TRUNC, 0600);
	int iter = 0;

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

	for (; iter != '\0'; iter++)
	{
		putchar(text_content[iter]);
	}

	close(fd);
	return (1);
}
