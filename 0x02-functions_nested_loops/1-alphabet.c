#include "main.h"

/**
 * main - print alphabet in lowercase
 * Return : success == 0
 */

void print_alphabet(void)
{
	char c;
	for ( c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
