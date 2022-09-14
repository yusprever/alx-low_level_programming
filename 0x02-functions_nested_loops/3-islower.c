#include "main.h"

/**
 * _islower: converting to lower case
 * @c: variable
 * description: 1 lowercase, 0 other
 * Return: integer
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
