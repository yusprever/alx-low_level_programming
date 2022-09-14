#include "main.h"
/**
 * print_last_digit - prints last digit
 * @c: int
 * description - return last digit
 * Return: int
 */

int print_last_digit(int a)
{
	
	if (a < 0)
	{
		a = -(a % 10);
	}
	else if (a > 0)
	{
		a = a % 10;
	}
	else
	{
		a = 0;
	}

	_putchar(a + '0');

	return (a);
}
