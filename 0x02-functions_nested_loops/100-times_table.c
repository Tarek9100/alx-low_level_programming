#include "main.h"
#include <stdio.h>
/**
 * print_times_table - This is a absolute value
 *
 * @n: This is the entry
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int i, j, res;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i < (n + 1); i++)
	{
	printf("%d", 0);
		for (j = 1; j < n; j++)
		{	res = i * j;
			if (res < 10)
			printf(",   %d", res);
			else if (res < 100)
			printf(",  %d", res);
			else
			printf(", %d", res);
		}
		if (n != 0)
		{	res = i * j;
			if (res < 10)
			printf(",   %d\n", res);
			else if (res < 100)
			printf(",  %d\n", res);
			else
			printf(", %d\n", res);
		}
		else
		_putchar('\n');
	}
	}
}
