#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to
 * the POSIX standard output.
 * @filename: The file to read and print.
 * @letters: The number of letters it should read and print.
 *
 * Return: the number of printed letters,
 * or 0 if the file is NULL, or can not be opened or read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int FD;
	ssize_t read_letters, write_letters;
	char *buffer;
	
	if (filename == NULL || letters == 0)
		return (0);
	FD = open(filename, O_RDONLY);
	if (FD == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(FD);
		return (0);
	}
	read_letters = read(FD, buffer, letters);
	if (read_letters == -1)
	{
		free(buffer);
		close(FD);
		return (0);
	}
	write_letters = write(STDOUT_FILENO, buffer, read_letters);
	free(buffer);
	close(FD);
	if (write_letters == -1 || write_letters != read_letters)
		return (0);
	return (write_letters);
}
