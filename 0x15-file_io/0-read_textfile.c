#include "main.h"
/**
 *read_textfile - ksksks
 *@filename: jakaja
 *@letters: sshsfs
 *Return: cont
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY, 400);

	char *buffer = malloc(sizeof(char *) * letters);

	ssize_t cont = 0, validator;

	if (filename == NULL)
	{
		return (0);
		free(buffer);
		close(fd);
	}

	if (buffer == NULL)
	{
		return (0);
		close(fd);
	}
	/* READ */
	if (fd == -1)
	{
		return (0);
		free(buffer);
		close(fd);
	}

	cont = read(fd, buffer, letters);
	/* WRITE */
	validator = write(0, buffer, letters);

	if (validator == -1)
	{
		return (0);
		free(buffer);
		close(fd);
	}
	close(fd);
	return (cont);
}
