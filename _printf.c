#include "main.h"

/**
* _printf - is a function that selects the correct flag to print.
* @format: identifier to look for.
* Return: void
*/

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	process_format1(format, args);
	process_format2(format, args);
	process_format3(format, args);
	handle_hexa(format, args);

	va_end(args);
	return (0);
}
