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
	unsigned int i, count = 0, s_count = 0;

	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar (format[i]);
			count++;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			putchar(va_arg(args, int));
			i++;
			count++;
		}
		else if (format[i + 1] == 's')
		{
			char *str = va_arg(args, char *);

			s_count = _puts(str);
			i++;
			count += (s_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			putchar('%');
		}
		count += 1;

	}
	va_end(args);
	return (count);

}
