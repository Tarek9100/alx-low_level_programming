#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that computes and prints
 *the sum of all the multiples of 3 or 5 below 1024
 * Return: Always Zero
 */

int main(void)
{
	long int sum = 0;
	int n = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum = sum + n;
		n++;
	}
	printf("%ld\n", sum);
}


