#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: random string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int size = 0;
	int stop;
	

	while (*(str +size))
	{
		size++;
	}
	
	if (size % 2 == 0)
	{
		stop = size / 2;
	}
	else
	{
		stop = (size - 1) / 2;
	}
	
	while (stop <= size + 1)
	{
		_putchar(*(str + stop));
		stop++;
	}
	_putchar('\n');

}
