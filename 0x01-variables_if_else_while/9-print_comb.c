#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + 48);
		if (num != 9)
		putchar(',');
		else
		putchar('\n');
	}
	return (0);
}
