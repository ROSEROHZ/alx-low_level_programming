#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first to be swapped
 * @b: second to be swapped
 */
void swap_int(int *a, int *b)
{
int d;

d = *a;
*a = *b;
*b = d;
}
