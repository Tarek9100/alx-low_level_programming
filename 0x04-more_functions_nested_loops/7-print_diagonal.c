#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i == (n - 1))
_putchar('\\');
else
_putchar('\n');
}
_putchar('\n');
}
