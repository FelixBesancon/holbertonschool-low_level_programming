#include "main.h"

/**
* exit_from_error - Writes an error message and exit the program
* when an error with file_from occures.
* @file_name: The name of the file on error.
*
* Exit: 98.
*/
void exit_from_error(const char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
	exit(98);
}

/**
* exit_to_error - Writes an error message and exit the program
* when an error with file_to occures.
* @file_name: The name of the file on error.
*
* Exit: 99.
*/
void exit_to_error(const char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
	exit(99);
}

/**
* exit_close_error - Writes an error message and exit the program
* when an error with file_to occures.
* @FD: The file descriptor on error.
*
* Exit: 100.
*/
void exit_close_error(int FD)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", FD);
	exit(100);
}

/**
 * main - Copies the content of a file to another file.
 *
 * @argc: The arguments count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, -1 on error, otherwise
 * exit 97 if the number of argument is not the correct one (3)
 * exit 98 if file_from does not exist, or if it can not be read
 * exit 99 if the file can not be created or if write to file_to fails
 * exit 100
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	char *buffer;
	ssize_t read_bytes, write_bytes, close_FD;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		exit_from_error(argv[1]);
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to == -1)
		exit_to_error(argv[2]);
	buffer = malloc(1024);
	if (buffer == NULL)
		exit_to_error(argv[2]);
	read_bytes = read(file_from, buffer, 1024);
	while (read_bytes != 0)
	{
		if (read_bytes == -1)
			exit_from_error(argv[1]);
		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes == -1 || read_bytes != write_bytes)
			exit_to_error(argv[2]);
		read_bytes = read(file_from, buffer, 1024);
	}
	free(buffer);
	close_FD = close(file_from);
	if (close_FD == -1)
		exit_close_error(file_from);
	close_FD = close(file_to);
	if (close_FD == -1)
		exit_close_error(file_to);
	return (0);
}
