#include "main.h"

/**
 * _memcpy - copy from src to dest
 * @dest: the address to copy to
 * @src: content to copy
 * @n: index to start copying from
 *
 * Return: char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int j = 0;

	while (*(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
