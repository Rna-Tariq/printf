#include "main.h"

/**
* _int_to_str - Custom function to convert an integer to a string.
* @val: value.
* @buf: buffer.
* Return: void.
*/

void _int_to_str(int val, char *buf)
{
	int i = 0;
	int j;
	int is_negative = 0;

	if (val < 0)
	{
		is_negative = 1;
		val = -val;
	}

	do {
		buf[i++] = (char)(val % 10 + '0');
		val /= 10;
	} while (val > 0);

	if (is_negative)
	{
		buf[i++] = '-';
	}

	for (j = 0; j < i / 2; j++)
	{
		char tmp = buf[j];

		buf[j] = buf[i - j - 1];
		buf[i - j - 1] = tmp;
	}
	buf[i] = '\0';
}

/**
* _double_to_str - Custom function to convert a double to a string.
* @val: decimal value.
* @buf: buffer.
* @buf_size: buffer size.
* @precision: the amount of information that is
* conveyed by a number in terms of its digits.
* Return: void
*/

void _double_to_str(double val, char *buf, int buf_size, int precision)
{
	int i, int_part, digit;
	double fractional_part;

	if (val < 0)
	{
		_putchar('-');
		val = -val;
	}

	int_part = (int)val;

	_int_to_str(int_part, buf);
	_putchar('.');

	fractional_part = val - int_part;

	for (i = 0; i < precision; i++)
	{
		fractional_part *= 10;
		digit = (int)fractional_part;
		_putchar((char)(digit + '0'));
		fractional_part -= digit;
	}
	buf[buf_size - 1] = '\0';
}
