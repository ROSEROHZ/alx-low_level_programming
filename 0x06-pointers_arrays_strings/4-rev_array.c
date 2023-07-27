#include "main.h"
/**
 * reverse_array - reverses array of integers
 * @a: array
 * @n: size of array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
int i;
int k;

for (i = 0; i < n--; i++)
{
k = a[i];
a[i] = a[n];
a[n] = k;
}
}
