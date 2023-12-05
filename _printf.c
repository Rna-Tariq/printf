#include "main.h"

/**
 * _printf - Function to print formatted output.
 * @format: Format specifier.
 * Return: Number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
char *buf = NULL;
int char_count = 0;

va_list args;
va_start(args, format);

if (format == NULL)
return (-1);
process_format(format, args, &buf, &char_count);


write(STDOUT_FILENO, buf, char_count);

free(buf);

va_end(args);

return (char_count);
}

/**
 * process_format - Process the format specifier and handle printing.
 * @format: Format specifier.
 * @args: Variable arguments.
 * @buf: Buffer to store characters.
 * @char_count: Character count.
 * Return: void.
 */

void process_format(const char *format, va_list args,
char **buf, int *char_count)
{
int buf_idx = 0;
while (*format)
{
if (*format == '%' && format++)
{
switch (*format)
{
case 'c':
{
char ch = va_arg(args, int);
_putchar(ch, buf, char_count);
break;
}
case 's':
{
const char *str = va_arg(args, const char *);
_puts(str, buf, char_count);
break;
}
case 'd':
case 'i':
{
int val = va_arg(args, int);
_int_to_str(val, *buf, &buf_idx, char_count);
break;
}
case '%':
_putchar('%', buf, char_count);
break;
default:
_putchar('%', buf, char_count);
_putchar(*format, buf, char_count);
break;
}
}
else
_putchar(*format, buf, char_count);

format++;
}
}
