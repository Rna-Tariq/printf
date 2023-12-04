#include "main.h"

/**
 * _printf - Function to print formatted output.
 * @format: Format specifier.
 * Return: Number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
char buffer[MAX_BUF_SIZE];
int buffer_index = 0;
int char_count = 0;

va_list args;
va_start(args, format);

process_format(format, args, buffer, &buffer_index, &char_count);

buffer[buffer_index] = '\0';

write(1, buffer, buffer_index);

va_end(args);

return char_count;
}

/**
 * process_format - Process the format specifier and handle printing.
 * @format: Format specifier.
 * @args: Variable arguments.
 * @buffer: Buffer to store characters.
 * @buf_idx: Buffer index.
 * @char_count: Character count.
 * Return: void.
 */

static void process_format(const char *format, va_list args, char *buffer, int *buf_idx, int *char_count)
{
while (*format)
{
if (*format == '%' && format++)
{
switch (*format)
{
case 'c':
{
char ch = va_arg(args, int);
_putchar(ch, buffer, buf_idx, char_count);
break;
}
case 's':
{
const char *str = va_arg(args, const char *);
_puts(str, buffer, buf_idx, char_count);
break;
}
case 'd':
case 'i':
{
int value = va_arg(args, int);
_int_to_str(value, buffer, buf_idx, char_count);
break;
}
case '%':
_putchar('%', buffer, buf_idx, char_count);
break;
default:
_putchar(*format, buffer, buf_idx, char_count);
break;
}
} 
else
_putchar(*format, buffer, buf_idx, char_count);

format++;
}
}
