#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n = 103;
	int x = n % 10;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
	if (x > 5)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	else if (x == 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	else if (x < 6 && x != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}

        return (0);
}
