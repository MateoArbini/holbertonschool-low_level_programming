#include "main.h"
/**
 *main - function that copies a file into another
 *@argc: argument counter
 *@argv: argument value
 *Return: 0
 **/
int main(int argc, char *argv[])
{
int fd_filefrom, fd_fileto, write_validator = 0;
char *buffer;
int read_length = 0, close1_validator = 0, close2_validator = 0;

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp_file_from file_to\n"), exit(97);
fd_filefrom = open(argv[1], O_RDONLY);
if (fd_filefrom == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
}
fd_fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_fileto == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
buffer = malloc(sizeof(char *) * 1024);
if (buffer == NULL)
	return (0);
while (read_length > 0)
{
read_length = read(fd_filefrom, buffer, 1024);
if (read_length == -1)
{
free(buffer);
dprintf(STDERR_FILENO, "Error: Can't read from file\n"), exit(98);
}
if (read_length > 0)
{
	write_validator = write(fd_fileto, buffer, read_length);
if (write_validator == -1)
{
free(buffer);
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
}
}
}
free(buffer);
close1_validator = close(fd_filefrom);
if (close1_validator == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n"), exit(100);
close2_validator = close(fd_fileto);
if (close2_validator == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n"), exit(100);
return (0);
}



