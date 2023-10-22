#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _putchar(char c);
int _printf(const char *format, ...);
int _puts(char *c);
int _printf_string(va_list val);
unsigned int _strlen(const char *str);
int print_percentage(void);
int _print_dec(va_list args);
int _print_number(va_list args);
int print_binary(va_list val);
int _print_unsigned(va_list args);
int print_octal(va_list val);
int print_hex(va_list val);
int print_Hex(va_list val);
int printf_str(va_list val);
int print_HEX(unsigned int num);
int print_revs(va_list val);
int print_rot13(va_list val);

#endif

