#include "main.h"

/**
 * append_text_to_file - function that append content to file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: the file created
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int _file, _write, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	_file = open(filename, O_WRONLY, O_APPEND);
	if (_file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
		_write = write(_file, text_content, len);
		if (_write == -1)
			return (-1);
	}
	close(_file);

	return (1);

}

