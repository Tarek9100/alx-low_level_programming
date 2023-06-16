#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char c;

	for (char = 'z'; char >= 'a'; char--)
	{
		putchar(char);
	}
	putchar('\n');
	return (0);
}
