#include "main.h"

/**
* process_format1 - handling c, s, and %
* @format: identifier to look for.
* @args: args.
* Return: void
*/

int process_format1(const char *format, va_list args)
{
	char buf[MAX_BUF_SIZE];
	int buf_idx = 0;
	int char_count = 0;

	while (*format)
	{
		if (*format == '%' && format++)
		{
			switch (*format)
			{
				case 'c':
				{
					char ch = va_arg(args, int);

					_putchar(ch, buf, &buf_idx, &char_count);
					break;
				}
				case 's':
				{
					const char *str = va_arg(args, const char *);

					_puts(str, buf, &buf_idx, &char_count);
					break;
				}
				default:
				{
					_putchar(*format, buf, &buf_idx, &char_count);
					break;
				}
			}
		} else
			_putchar(*format, buf, &buf_idx, &char_count);
		format++;
	}

	write(STDOUT_FILENO, buf, buf_idx);

	va_end(args);

	return (char_count);
}

/**
* handle_percent - handling %
* @format: identifier to look for.
* @args: args.
* Return: void
*/

int handle_percent(const char *format, va_list args)
{
	char buf[MAX_BUF_SIZE];
	int buf_idx = 0;
	int char_count = 0;

	while (*format)
	{
		if (*format == '%' && format++)
		{
			switch (*format)
			{
				case '%':
				{
					_putchar('%', buf, &buf_idx, &char_count);
					break;
				}
				default:
				{
					_putchar(*format, buf, &buf_idx, &char_count);
					break;
				}
			}
		} else
			_putchar(*format, buf, &buf_idx, &char_count);
		format++;
	}

	va_end(args);

	return (char_count);
}
