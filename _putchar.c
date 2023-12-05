#include "main.h"

/**
* _putchar - Custom putchar function
* @ch: character to print.
* @buf: buffer
* @char_count: character counter
* Return: void.
*/

void _putchar(char ch, char **buf, int *char_count)
{
	int i;
	char *new_buf = (char *)malloc((*char_count + 2) * sizeof(char));

	if (new_buf == NULL)
	{
		write(STDOUT_FILENO, "Memory allocation failed\n", 26);
		exit(1);
	}

	if (*buf != NULL)
	{
		for (i = 0; i < *char_count; i++)
			new_buf[i] = (*buf)[i];
	}
	free(*buf);

	new_buf[*char_count] = ch;
	new_buf[*char_count + 1] = '\0';
	*buf = new_buf;
	(*char_count)++;
}
