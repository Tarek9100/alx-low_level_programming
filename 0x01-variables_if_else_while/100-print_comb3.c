#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i >= j)
				continue;
			putchar(i + 48);
			putchar(j + 48);
			if (i == 8 && j == 9)
			{
				putchar('\n');
			}
			else
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	return (0);
}
