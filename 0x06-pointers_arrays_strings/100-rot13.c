#include "main.h"
/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @hi: This is my input string
 *
 * Return: String converted to rot13
 *
 */

char *rot13(char *hi)
{
int i;
for (i = 0; hi[i] != '\0'; i++)
{
if ((hi[i] >= 'a' && hi[i] < 'n') || (hi[i] >= 'A' && hi[i] < 'N'))
{
hi[i] += 13;
}
else if ((hi[i] >= 'n' && hi[i] <= 'z') || (hi[i] >= 'N' && hi[i] <= 'Z'))
{
hi[i] -= 13;
}
}
hi[i] = '\0';
return (hi);
}
