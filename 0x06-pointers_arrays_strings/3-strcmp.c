#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 *
 * Return: (+,-,0)int
 */
int _strcmp(char *s1, char *s2)
{

	int len = 0;
	int len2 = 0;

	while (*(s1 + len))
	{
		len++;
	}
	while (*(s2 + len2))
	{
		len2++;
	}

	if (len > len2)
	{
		return (15);
	}
	else if (len < len2)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
