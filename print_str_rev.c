#include "main.h"

/**
 * print_revs - prints a string in reverse
 * @val: argument
 * Return: the string
 */

int print_revs(va_list val)
{
	char *s = va_arg(val, char *);
	int i;
	int count = 0;

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0' ; i++)
		count++;
	for (i = count - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	return (i);
}
