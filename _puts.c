#include "main.h"

/**
* _puts - Custom puts function.
* @str: a pointer to the string to be printed.
* Return: void.
*/

void _puts(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
