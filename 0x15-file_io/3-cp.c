#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * close_check_100 - closes a file
 * exit(100) on error
 *
 * @fd: file descriptor of file being closed
 *
 * Return: nothing
 */
void close_check_100(int fd)
{
	int close_fd = close(fd);

	if (close_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * check_argc_97 - checks the number of arguements
 * If the number of argument is not the correct one, exit with code 97
 * and print Usage: cp file_from file_to, followed by a
 * new line, on the POSIX standard error
 *
 * @argc: arguement count
 *
 * Return: nothing
 */
void check_argc_97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_from_check_98 - opens a file and checks for errors
 * exit(98) if error
 *
 * @file: name of file to open
 *
 * Return: file descriptor of opened file
 */
int open_from_check_98(char *file)
{
	int open_from = open(file, O_RDONLY);

	if (open_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return (open_from);
}

/**
 * read_from_check_98 - reads a file
 * exit(98) on error
 *
 * @buffer: points to the buffer that holds read characters
 *
 * @fd_from: file descriptor of file to read
 *
 * @fd_to: file descriptor of file to write to
 *
 * @file: name of file to read from
 *
 * Return: length of read file
 */
int read_from_check_98(int fd_to, int fd_from, char *buffer, char *file)
{
	int rd = read(fd_from, buffer, 1024);

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	return (rd);
}

/**
 * open_to_check_99 - opens a file and checks for errors
 * exit(99) if error
 *
 * @file: name of the file to open
 *
 * @perm: file permissions
 *
 * @fd_from: file descriptor of file being copied from
 *
 * Return: file descriptor of opened file
 */
int open_to_check_99(char *file, mode_t perm, int fd_from)
{
	int open_to = open(file, O_WRONLY | O_CREAT | O_TRUNC, perm);

	if (open_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		close(fd_from);
		exit(99);
	}

	return (open_to);
}

/**
 * main - copies the content of a file to another file
 *
 * @argc: arguement count
 *
 * @argv: arguement vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	char buffer[1024];
	int fd_from, fd_to;
	ssize_t len_r, len_w;
	mode_t file_perm;

	check_argc_97(argc);

	fd_from = open_from_check_98(argv[1]);

	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd_to = open_to_check_99(argv[2], file_perm, fd_from);

	len_r = 1024;

	while (len_r == 1024)
	{
		len_r = read(fd_from, buffer, 1024);
		if (len_r == -1)
		{
			/* print error */
			close(fd_from);
			close(fd_to);
			exit(98);
		}


		len_w = write(fd_to, buffer, len_r);

		if (len_w != len_r)
			len_w = -1;
		if (len_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	close_check_100(fd_from);
	close_check_100(fd_to);

	return (0);
}

