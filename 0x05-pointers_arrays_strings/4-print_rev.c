#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len))
	{
		len++;
	}

	while (*(s + len))
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
