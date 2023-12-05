#include "main.h"

/**
* _putchar - Custom putchar function
* @ch: character to print.
* @buf: buffer
* @buf_idx: buffer index
* @char_count: character counter
* Return: void.
*/

void _putchar(char ch, char *buf, int *buf_idx, int *char_count)
{
	if (*buf_idx == MAX_BUF_SIZE - 1)
	{
		write(STDOUT_FILENO, buf, *buf_idx);
		*buf_idx = 0;
	}
	buf[(*buf_idx)++] = ch;
	(*char_count)++;
}
