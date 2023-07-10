#include "main.h"

/**
* create_array - creates an array of chars, and
* initializes it with a specific char.
*@size: Size of the array
*@c: Character to insert
*Return: NULL if size is zero or if it fails,
*pointer to array if everything is normal.
*/

char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);

char *ar;
int i;

ar = malloc(size);
if (ar == NULL)
return (NULL);
for (i = 0; i < size; i++)
ar[i] = c;
return (ar);
}