#include "main.h"

/**
 * read_textfile - reads text from a file and prints it
 * @filename: name of file
 * @letters: letters count
 *
 * Return: number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t size;
	char *buffer;

	if (!filename || !letters)
	{
		return (0);
	}

	buffer = (char *) malloc(letters + 1);
	if (!buffer)
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}

	size = read(fp, buffer, letters);
	size = write(STDOUT_FILENO, buffer, size);

	close(fp);
	free(buffer);

	return (size);
}
