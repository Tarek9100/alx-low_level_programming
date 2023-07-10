#include "main.h"
/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/

char *str_concat(char *s1, char *s2)
{
int len, i, j;
char *str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (len = 0; s1[len] != '\0'; len++)
;
for (; s2[len] != '\0'; len++)
;
str = malloc(sizeof(char) * (len + 1));
for (i = 0; s1[i] != '\0'; i++)
str[j++] = s1[i];
for (i = 0; s2[i] != '\0'; i++)
str[j++] = s2[i];
return (str);
}
