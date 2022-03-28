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

	ssize_t cont = 0, validator = 0;

	if (filename == NULL)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	/* READ */
	if (fd == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	cont = read(fd, buffer, letters);
	/* WRITE */
	validator = write(0, buffer, letters);

	if (validator == 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	return (cont);
}
