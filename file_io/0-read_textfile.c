#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters that should be read and print
 *
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes_read, bytes_written;

	/* invalid file*/
	if (!filename)
		return (0);

	/* create space for the buffer to load the file into*/
	buf = (char *)malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	/*open and read the file*/
	fd = open(filename, O_RDONLY);

	/*failed to open file*/
	if (fd == -1)
		{
			free(buf);
			return (0);
		}

	/*Read from the file*/
	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
		{
			free(buf);
			close(fd);
			return (0);
		}
	/*Write to the stdout*/
	bytes_written = write(STDOUT_FILENO, buf, letters);

	free(buf);
	close(fd);

	/*Making sure what was read has been written*/
	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	return (bytes_read);
}
