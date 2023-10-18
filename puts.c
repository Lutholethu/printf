#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: number of byte
 */

int _puts( char *c)
{
	int count = 0;

	if (c)

	{
		for (count = 0; c[count] != '\0'; count++)
		{
			putchar(c[count]);
		}
	}
	return (count);
}
