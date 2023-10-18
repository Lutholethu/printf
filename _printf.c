#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - prints formatted output
 * @format: format specifier
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int count = 0;

	unsigned int s_count = 0;

	va_list args;

	va_start(args, format);

	for (count = 0; format[count] != '\0'; count++)
	{
		if (format[count] != '%')
		{
			putchar (format[count]);
		}
		if (format[count] == '%' && format[count + 1] == 'c')
		{
			putchar(va_arg(args, int));
			count++;
		}
		else if (format[count + 1] == 's')
		{
			char *str = va_arg(args, char *);
			s_count = _puts(str);
			count++;
			count += (s_count - 1);
		}
		else if (format[count + 1] == '%')
		{
			putchar('%');
		}
		count += 1;

	}

	va_end(args);
	return (count);  

}
