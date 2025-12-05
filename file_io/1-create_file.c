#include "main.h"

/**
 * create_file - Creates a file named with filename and filled with
 * text_content, with read and write permission for the user only.
 * If the file already exist, il must be truncated and permissions
 * unchanged. If text_content is NULL, an empty file is created.
 * @filename: The name of the file to create.
 * @text_content: The text to fill the file with.
 *
 * Return: 1 on success, -1 on failure or if filename is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int FD;
	ssize_t count_letters, write_letters;

	if (filename == NULL)
		return (-1);
	FD = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (FD == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(FD);
		return (1);
	}
	count_letters = 0;
	while (text_content[count_letters] != '\0')
		count_letters++;
	write_letters = write(FD, text_content, count_letters);
	if (write_letters == -1 || count_letters != write_letters)
	{
		close(FD);
		return (-1);
	}
	close(FD);
	return (1);
}
