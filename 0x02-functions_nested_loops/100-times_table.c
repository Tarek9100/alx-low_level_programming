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
	int i, j;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i < (n + 1); i++)
	{
	printf("%d", 0);
		for (j = 1; j < n; j++)
		{
			printf(", %d", (i * j));
		}
		printf(", %d\n", (i * j));
	}
	}
}
