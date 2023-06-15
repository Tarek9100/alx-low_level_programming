#include <stdio.h>

/**
 * main - Aprogram that prints the size of various data types.
 *
 * Return: Always 0 (Succeed)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)\n
Size of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\n
Size of a float: %d byte(s)"
, sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(f));
	return (0);
}
