#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 10;

	while(*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
