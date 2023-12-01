#include "main.h"

/**
* process_format1 - handling c, s, and %
* @format: identifier to look for.
* @args: args.
* Return: void
*/

void process_format1(const char *format, va_list args)
{
	while (*format)
	{
		if (*format == '%' && format++)
		{
			switch (*format)
			{
				case 'c':
				{
					char ch = (char) va_arg(args, int);

					_putchar(ch);
					break;
				}
				case 's':
				{
					const char *str = va_arg(args, const char *);

					_puts(str);
					break;
				}
				case '%':
				{
					_putchar('%');
					break;
				}
				default:
					_putchar('%');
					_putchar(*format);
			}
		} else
		{
			_putchar(*format);
		}

		format++;
	}
}
