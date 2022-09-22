#include "main.h"

/**
 * _strncat - combines two string + n
 * @dest: string 1
 * @src: string 2
 * @n: size to copy from src
 *
 * Return: char
 */
char *_stncat(char *dest, char *src, int n)
{
	int len = 0;
	int len2 = 0;
	int sizeN = 0;

	while (*(dest + len))
	{
		len++;
	}

	while (*(src + sizeN))
	{
		if (sizeN == n)
		{
			dest[len] = *(src + n);
		}
	}
	len++;
	while (*(src + len2))
	{
		dest[len] = *(src + len2);
	}

	return (dest);
}
