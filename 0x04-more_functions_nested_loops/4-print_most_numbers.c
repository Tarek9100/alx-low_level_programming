#include "main.h"
/**
*print_most_numbers - prints numbers except 2 and 4
*
*Return: returns nothing
*/
void print_most_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
if (i == 2 || i == 4)
continue;
else
_putchar(i);
}
_putchar('\n');
}
