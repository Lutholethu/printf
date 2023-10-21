#include "main.h"
/**
 * _print_unsigned - prints an integer
 * @args: argument to be printed
 * Return: number of characters printed
 */

int _print_unsigned(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (n < 0)
	{
		n = -n;
		num = -num;
		_putchar('-');
		i++;

	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
	}
	num = n;
	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num = num - (digit * exp);
		exp = exp / 10;
		i++;
	}
	_putchar((last + '0');
			return (i);
}
