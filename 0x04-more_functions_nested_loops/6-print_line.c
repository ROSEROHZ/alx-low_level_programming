#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *@n: times straight line is printed
 * Return: Always 0.
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int h;

for (h = 1; h <= n; h++)
{
_putchar('_');
}
_putchar('\n');
}
}
