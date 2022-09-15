#include "main.h"

/**
 * _isupper - check if uppercase
 * @c - char
 * description - check if uppercase
 * Return: 0 :otherwise, 1 :uppercase
 */
int _isupper(int c)
{
	if ( c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
