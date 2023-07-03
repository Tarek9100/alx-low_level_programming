#include "main.h"
#include <stdio.h>
/**
*print_diagsums -  a function that prints the sum of
* the two diagonals of a square matrix of integers.
*@a:matrix to be summed
*@size:size of the matrix
*/
void print_diagsums(int *a, int size)
{
int i, j, sum1 = 0, sum2 = 0;
for (i = 0, j = size - 1; i < size * size;
i = i + size + 1, j = j + size - 1)
{
sum1 += a[i];
sum2 += a[j];
}
printf("%d, %d\n", sum1, sum2);
}
