#include "main.h"

/**
* _printf - is a function that selects the correct flag to print.
* @format: identifier to look for.
* Return: void
*/

int _printf(const char *format, ...)
{
	char buffer[MAX_BUF_SIZE];
	int buffer_index = 0;
	int char_count = 0;

	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && format++)
		{
			switch (*format)
			{
				case 'c':
				{
					char ch = va_arg(args, int);

					_putchar(ch, buffer, &buffer_index, &char_count);
					break;
				}
				case 's':
				{
					const char *str = va_arg(args, const char *);

					_puts(str, buffer, &buffer_index, &char_count);
					break;
				}
				case 'd':
				case 'i':
				{
					int value = va_arg(args, int);

					_int_to_str(value, buffer, &buffer_index, &char_count);
					break;
				}
				case '%':
				{
					_putchar('%', buffer, &buffer_index, &char_count);
					break;
				}
				default:
				{
					_putchar(*format, buffer, &buffer_index, &char_count);
					break;
				}
			}
		} else
			_putchar(*format, buffer, &buffer_index, &char_count);

		format++;
	}

	write(STDOUT_FILENO, buffer, buffer_index);

	va_end(args);

	return (char_count);
}
