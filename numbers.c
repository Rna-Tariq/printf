#include "main.h"

/**
* _int_to_str - Custom function to convert an integer to a string.
* @val: value.
* @buf: buf.
* @buf_idx: buffer index
* @char_count: character counter
* Return: void.
*/

void _int_to_str(int val, char *buf, int *buf_idx, int *char_count)
{
	int temp = val;
	int num_digits = 0;
	int i;

	do {
		temp /= 10;
		num_digits++;
	} while (temp != 0);

	if (val < 0)
		num_digits++;

	if (*buf_idx + num_digits >= MAX_BUF_SIZE)
	{
		write(STDOUT_FILENO, buf, *buf_idx);
		*buf_idx = 0;
	}

	i = *buf_idx + num_digits;
	buf[i--] = '\0';

	do {
		buf[i--] = abs(val % 10) + '0';
		val /= 10;
	} while (val != 0);

	if (i == *buf_idx)
	{
		buf[i--] = '-';
	}

	*buf_idx += num_digits;
	*char_count += num_digits;
}
