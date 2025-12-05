#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file,
 * @filename: The name of the file to append text at the end.
 * @text_content: The text to append at the end of the file.
 *
 * Return: 1 on success, -1 on failure or if the file
 * does not exist or with no write permission.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int FD;
	ssize_t count_letters, write_letters;

	if (filename == NULL)
		return (-1);
	FD = open(filename, O_WRONLY | O_APPEND);
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
