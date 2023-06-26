#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
int i = 0, j = 0;
while (s[i] != '\0')
{
i++;
}
char m[i] = {0};
for (; s[i] != '\0'; i--)
{
m[j] = s[i];
j++;
}
}
