#include "main.h"

/**
* _puts - Custom puts function.
* @str: a pointer to the string to be printed.
* @buf: buffer
* @char_count: character counter
* Return: void.
*/

void _puts(const char *str, char **buf, int *char_count)
{
	int str_len = 0;
	int i;
	char *new_buf;

	while (str[str_len] != '\0')
		str_len++;

	new_buf = (char *)malloc((*char_count + str_len + 1) * sizeof(char));

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

	for (i = 0; i < str_len; i++)
		new_buf[*char_count + i] = str[i];

	new_buf[*char_count + str_len] = '\0';
	*buf = new_buf;
	*char_count += str_len;
}
