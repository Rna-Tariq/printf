#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUF_SIZE 1024

void _putchar(char ch, char *buf, int *buf_idx, int *char_count);
void _puts(const char *str, char *buffer, int *buffer_index, int *char_count);
char *_strcpy(char *dest, const char *src);
size_t _strlen(const char *str);

void _int_to_str(int val, char *buf, int *buf_idx, int *char_count);

void _putBinary(unsigned int val);
void _putUnsigned(unsigned int val);
void _putOctal(unsigned int val);
void _putHexa(unsigned int val, int uppercase);

int process_format1(const char *format, va_list args);
int handle_percent(const char *format, va_list args);
int process_format2(const char *format, va_list args);
void process_format3(const char *format, va_list args);
void process_format(const char *format, va_list args,char *buffer,
 int *buf_idx, int *char_count);
void handle_hexa(const char *format, va_list args);

int _printf(const char *format, ...);

#endif
