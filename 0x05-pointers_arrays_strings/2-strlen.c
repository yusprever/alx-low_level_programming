#include "main.h"

/**
 * _strlen - print lenth of char
 * @s - random char
 * description - print length of char vaiable
 *
 * Retrun: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
