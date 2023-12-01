#include "main.h"

/**
* _write - Custom write function to output characters
* @buf: buffer.
* @count: digits number.
* Return: output.
*/

ssize_t _write(const void *buf, size_t count)
{
	return (write(STDOUT_FILENO, buf, count));
}

/**
* _putchar - Custom putchar function
* @ch: character to print.
* Return: void.
*/

void _putchar(char ch)
{
	_write(&ch, 1);
}
