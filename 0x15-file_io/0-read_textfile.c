#include "main.h"

/**
 * read_textfile - read a text file and print it to POSIX standard output
 * @filename: the name of the file
 * @letters: number of letters to be written and read
 * Return:  actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, fp1;
	char *ch;
	size_t write_no;

	ch = malloc(sizeof(char) * letters);

	if (ch == NULL)
	{
		free(ch);
		return (0);
	}
	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY, 0600);

	if (fp == -1)
	{
		close(fp);
		exit(0);
	}

	write_no = read(fp, ch, letters);

	ch[letters] = '\0';

	close(fp);

	fp1 = write(STDOUT_FILENO, ch, write_no);
	if (fp1 == -1)
	{
		free(fp1);
		return (0);
	}


	return (fp1);
}

