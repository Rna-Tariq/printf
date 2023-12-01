#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

ssize_t _write(const void *buf, size_t count);
void _putchar(char ch);
void _puts(const char *str);
void _int_to_str(int val, char *buf);
void _double_to_str(double val, char *buf, int buf_size, int precision);
void process_format1(const char *format, va_list args);
void process_format2(const char *format, va_list args);
void _printf(const char *format, ...);
int main(void);

#endif
