#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

#define BUFFER_SIZE 1024

void print_error(const char *message) {
    dprintf(STDERR_FILENO, "Error: %s\n", message);
}

int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fd_from;
	int fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Can't read from file");
		dprintf(STDERR_FILENO, "%s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error("Can't write to file");
		dprintf(STDERR_FILENO, "%s\n", file_to);
		exit(99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error("Can't write to file");
			dprintf(STDERR_FILENO, "%s\n", file_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		print_error("Can't read from file");
		dprintf(STDERR_FILENO, "%s\n", file_from);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		print_error("Can't close file descriptor");
		dprintf(STDERR_FILENO, "%d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		print_error("Can't close file descriptor");
		dprintf(STDERR_FILENO, "%d\n", fd_to);
		exit(100);
	}
	if (chmod(file_to, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH) == -1)
	{
		print_error("Can't set file permissions");
		dprintf(STDERR_FILENO, "%s\n", file_to);
		exit(100);
	}

	return (0);
}
