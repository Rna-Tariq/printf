#include "main.h"

/**
* _putBinary -  handle a custom conversion specifier
* %b for converting an unsigned int to binary.
* @val: val
* Return: void
*/

void _putBinary(unsigned int val)
{
	char binary[32];
	int i = 0;
	int j;

	do {
		binary[i++] = (val & 1) + '0';
		val >>= 1;
	} while (val > 0);

	for (j = i - 1; j >= 0; j--)
		_putchar(binary[j]);
}

/**
* _putUnsigned -  handle a custom conversion specifier
* %u for converting an unsigned int to binary.
* @val: val
* Return: void
*/

void _putUnsigned(unsigned int val)
{
	char buffer[20];

	_int_to_str(val, buffer);
	_puts(buffer);
}

/**
* _putOctal -  handle a custom conversion specifier
* %o for converting an unsigned int to binary.
* @val: val
* Return: void
*/

void _putOctal(unsigned int val)
{
	char buffer[20];
	int i = 0;
	int j;

	do {
		buffer[i++] = (char)(val % 8 + '0');
		val /= 8;
	} while (val > 0);

	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);
}

/**
* _putHexa -  handle a custom conversion specifier
* %x and %X for converting an unsigned int to binary.
* @val: val
* @uppercase: uppercase
* Return: void
*/

void _putHexa(unsigned int val, int uppercase)
{
	char buffer[20];
	int i = 0;
	int j;

	do {
		char digit = (char)(val % 16);

		buffer[i++] = digit < 10 ? digit + '0' :
		(uppercase ? digit + 'A' - 10 : digit + 'a' - 10);
		val /= 16;
	} while (val > 0);

	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);
}
