#include "main.h"
/**
 *puts_half - function that prints half of a string, followed by a new line.
 *
 *@str: This is the input string
 */
void puts_half(char *str)
{
int i = 0, h;
while (str[i] != '\0')
{
i++;
}
h = i / 2;
for (; str[h] != '\0'; h++)
{
_putchar(str[h]);
}
_putchar('\n');
}
