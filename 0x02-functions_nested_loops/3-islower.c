#include "main.h"

/**
 * _islower: converting to lower case
 * @c: variable
 * Description: 1 for lowercase and 0 for others
 * Return: integer
 */
int _islower(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
