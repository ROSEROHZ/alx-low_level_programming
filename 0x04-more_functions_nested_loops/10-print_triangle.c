#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 * Return: Always 0.
 */

void print_triangle(int size)
{
int y, q;

if (size > 0)
{
for (y = 1; y <= size; y++)
{
for (q = size - y; q > 0; q--)
{
_putchar(' ');
}
for (q = 0; q < y; q++)
{
_putchar('#');
}
if (y == size)
{
continue;
}
_putchar('\n');
}
}
_putchar('\n');
}
