#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
int sum = 0;
char *c;

while (--argc)
{
for (*c = argv[argc]; *c; c++)
{
if (*c < '0' || *c > '9')
{
return (printf("Error\n"), 1);
}
}
sum += atoi(argv[argc]);
}
printf("%d\n", sum);
return (0);
}
