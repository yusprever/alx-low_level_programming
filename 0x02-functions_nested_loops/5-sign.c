#include "main.h"
/**
 * print_sign - prints signs
 * @n: int
 * description - return 1 if > 0, 0 if = 0,-1 if < 0
 * Return:int
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
