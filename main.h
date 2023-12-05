#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUF_SIZE 1024

void _putchar(char ch, char **buf, int *char_count);
void _puts(const char *str, char **buf, int *char_count);
char *_strcpy(char *dest, const char *src);
size_t _strlen(const char *str);

void process_format(const char *format, va_list args,
char **buf, int *char_count);
void _int_to_str(int val, char *buf, int *buf_idx, int *char_count);

int _printf(const char *format, ...);

#endif
