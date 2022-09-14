#include "main.h"
/**
 * _isalpha: any letter
 * @c: variable
 * description - return 1 if upper/lower
 * Return: int
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
