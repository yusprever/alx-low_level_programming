#include "main.h"

/**
 * _strncpy - copies contents of str 2 to str 1
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes to append
 *
 * Return: char dest
 */
char *_strncpy(char *dest, char *src, int n)
{

	int len = 0;

	while (len < n)
	{
		dest[len] = *(src + len);
		len++;
	}
	while (len < n)
	{
		*(dest + len) = '\0';
		len++;
	}

	return (dest);
}
