#include "main.h"
/**
 * print_binary - converts to binary
 * @val: argument
 * Return: integer
 */

int print_binary(va_list val)
{
	int flag = 0;
	int i, a = i, b;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & num);
		if (p >> (32 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
