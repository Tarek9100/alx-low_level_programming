#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int i, j, x, y, num1, num2;

	for (x = 0; x < 9; x++)
	{
		for (y = 0; y < 9; y++)
		{
			for (i = 0; i < 9; i++)
			{
				for (j = 0; j < 9; j++)
				{
					num1 = i * 10 + j;
					num2 = x * 10 + y;
					if (num1 > num2)
					{
					putchar('num1 + 48');
					putchar('num2 + 48');
					}
					else
					continue;
					if (num2 == 98)
					putchar('\n');
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}

