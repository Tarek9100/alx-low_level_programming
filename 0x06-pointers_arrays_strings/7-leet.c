#include "main.h"
/**
 * leet - Write a function that encodes a string into 1337
 *
 * @changed: This is the input string
 *
 * Return: String converted to 1337
 */

char *leet(char *changed)
{
int i, j;
char low[] = {'o', 'e', 'a', 't', 'l'};
char high[] = {'O', 'E', 'A', 'T', 'L'};
char num[] = {'0', '3', '4', '7', '1'};

for (i = 0; changed[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (changed[i] == low[j] || changed[i] == high[j])
{
changed[i] = num[j];
}
}
}
return (changed);
}
