#include "main.h"

/**
*read_textfile - reads a text file and prints it
*@letters: numbers of letters printed
*@filename: filename
*Return: numbers of letters. If it fails, returns 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int tf;
	ssize_t trd, mcr;
	char *buf;

	if (!filename)
		return (0);

	tf = open(filename, O_RDONLY);

	if (tf == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	trd = read(tf, buf, letters);
	mcr = write(STDOUT_FILENO, buf, trd);

	close(tf);

	free(buf);

	return (mcr);
}
