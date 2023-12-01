#include "main.h"

/**
* process_format2 - handling decimal, and integer.
* @format: identifier to look for.
* @args: args.
* Return: void
*/

void process_format2(const char *format, va_list args)
{
	while (*format)
	{
		if (*format == '%' && format++)
		{
			switch (*format)
			{
				case 'd':
				{
					int val = va_arg(args, int);
					char buf[20];

					_int_to_str(val, buf);
					_puts(buf);
					break;
				}
				case 'f':
				{
					double val = va_arg(args, double);
					char buf[20];

					_double_to_str(val, buf, sizeof(buf), 2);
					_puts(buf);
					break;
				}
			}
		}
		format++;
	}
}
