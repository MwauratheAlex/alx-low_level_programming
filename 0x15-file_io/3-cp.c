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
 * check_98 - exits on error and prints appropriate message
 * to std error, also closes open files
 *
 * @check: value being checked to decide if the error is there
 *
 * @fd_from: file descriptor of file to read
 *
 * @fd_to: file descriptor of file to write to
 *
 * @file: name of file to read from
 *
 * @cl: if cl == 1; open files are closed, else,
 * only the error is printed
 *
 * Return: length of read file
 */
void check_98(int check, int fd_to, int fd_from, char *file, int cl)
{

	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (cl == 1)
		{
			close(fd_from);
			close(fd_to);
		}
		exit(98);
	}
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
		dprintf(STDERR_FILENO, "Error: Can't write to %s", file);
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

	fd_from = open(argv[1], O_RDONLY);
	check_98(0, 0, fd_from, argv[1], 0);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd_to = open_to_check_99(argv[2], file_perm, fd_from);

	len_r = 1024;

	while (len_r == 1024)
	{
		len_r = read(fd_from, buffer, 1024);
		check_98(len_r, fd_to, fd_from, argv[1], 1);

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

