#include "main.h"
/**
 * _strncpy - Write a function that copies a string, with number of bytes
 * @dest: This is the output dest
 * @src: This is the input source
 * @n: This is the number of bytes to copy
 *
 *Return: Copied string with the number of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; (src[j] != '\0' && j < n); j++)
{
dest[j] = src[j];
}
for (; j < n; j++)
{
dest[j] = '\0';
}
return (dest);
}
