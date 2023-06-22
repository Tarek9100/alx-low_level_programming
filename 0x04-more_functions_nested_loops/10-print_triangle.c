#include "main.h"
/**
*print_triangle - prints a triangle
*@size:size parameter of triangle
*Return:returns nothing
*/
void print_triangle(int size)
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = size - i; j > 0; j--)
{
_putchar(' ');
}
for (j = 1; j < i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
