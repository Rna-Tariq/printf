#include "main.h"

/**
* *_strcpy - a function that copies the string pointed to by src,
*  including the terminating null byte (\0), to the buffer pointed to by dest.
*
* @dest: first arg.
* @src: second arg.
*
* Return: the pointer to dest.
*/

char *_strcpy(char *dest, const char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}


/**
* _strlen - a function that returns the length of a string.
*
* @str: input.
*
* Return: length of a string.
*/

size_t _strlen(const char *str)
{
	const char *s = str;

	while (*s)
		s++;
	return (s - str);
}
