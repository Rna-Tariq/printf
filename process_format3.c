#include "main.h"

/**
* process_format3 - handling b, u, and o.
* @format: identifier to look for.
* @args: args.
* Return: void
*/

void process_format3(const char *format, va_list args)
{
	while (*format)
	{
		if (*format == '%' && format++)
		{
			switch (*format)
			{
				case 'b':
				{
					unsigned int val = va_arg(args, unsigned int);

					_putBinary(val);
					break;
				}
				case 'u':
				{
					unsigned int val = va_arg(args, unsigned int);

					_putUnsigned(val);
					break;
				}
				case 'o':
				{
					unsigned int val = va_arg(args, unsigned int);

					_putOctal(val);
					break;
				}
			}
		}
		format++;
	}
}

/**
* handle_hexa - handling x, and X.
* @format: identifier to look for.
* @args: args.
* Return: void
*/
void handle_hexa(const char *format, va_list args)
{
	while (*format)
	{
		if (*format == '%' && format++)
		{
			switch (*format)
			{
				case 'x':
				{
					unsigned int val = va_arg(args, unsigned int);

					_putHexa(val, 0);
					break;
				}
				case 'X':
				{
					unsigned int val = va_arg(args, unsigned int);

					_putHexa(val, 1);
					break;
				}
			}
		}
		format++;
	}
}
