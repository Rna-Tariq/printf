#include "main.h"

/**
* _puts - Custom puts function.
* @str: a pointer to the string to be printed.
* @buf: buffer
* @buf_idx: buffer index
* @char_count: character counter
* Return: void.
*/

void _puts(const char *str, char *buf, int *buf_idx, int *char_count)
{
	size_t len = _strlen(str);

	if (*buf_idx + len >= MAX_BUF_SIZE)
	{
		write(STDOUT_FILENO, buf, *buf_idx);
		*buf_idx = 0;
	}

	_strcpy(buf + *buf_idx, str);
	*buf_idx += len;
	*char_count += len;
}
