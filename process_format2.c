#include "main.h"

/**
* process_format2 - handling decimal, and integer.
* @format: identifier to look for.
* @args: args.
* Return: void
*/

int process_format2(const char *format, va_list args)
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
				case 'd':
				{
					int val = va_arg(args, int);

					_int_to_str(val, buf, &buf_idx, &char_count);
					break;
				}
				case 'i':
				{
					int val = va_arg(args, int);

					_int_to_str(val, buf, &buf_idx, &char_count);
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
