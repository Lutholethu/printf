#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _puts(char *c);
int _printf_string(va_list val);
unsigned int _strlen(const char *str);

#endif

