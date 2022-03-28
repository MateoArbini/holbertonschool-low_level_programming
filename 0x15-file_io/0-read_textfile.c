#include "main.h"
/**
 *read_textfile - function that reads a text file and prints it to the POSIX
 *standard output.
 *@filename: name of the file
 *@letters: quantiy of chars impressed
 *Return: cont, which is the amount of chars impressed
 *We first, open the file named "filename", with the correspondant flag.
 *Then, we create and asign a buffer with malloc, with the size of letters
 *and the we create two vars tpe int, that are going to be the count and
 *validator. First, we try to open the file, if not, the function returns;
 *If not, after read it, it will save the amount of chars that the
 *system read, into a buffer. After that, we should write the same
 *quantity of chars (we have to remember to include border cases),
 *and finally, we have to ask if the validator, is the same or
 *different as the count, and if that is correct, it must return 0.
 *At the end, we should return count, which is the amount of chars
 *that the system read and impressed. IMPORTANT! -> dont forget to free
 *the asign memory if it failed, and close the fd, which is the
 *file descriptor.
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char *) * letters);
	int cont = 0, validator = 0;

	if (filename == NULL)
		return (0);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	if (fd == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	cont = read(fd, buffer, letters);
	if (cont == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	validator = write(STDOUT_FILENO, buffer, cont);
	if (validator == -1)
	{
		close(fd);
		free(buffer);
		return (validator);
	}
	if (validator != cont)
	{
		return (0);
	}
	close(fd);
	free(buffer);
	return (cont);
}
