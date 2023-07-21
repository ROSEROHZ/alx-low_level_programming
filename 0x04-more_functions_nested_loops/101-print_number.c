#include "main.h"

/**
 * print_number - prints an integer
 *@n: input integer
 * Return: Always 0.
 */

void print_number(int n)
{
unsigned int w = n;

if (n < 0)
{
_putchar('-');
w = -w;
}

if ((w / 10) > 0)
print_number(w / 10);

_putchar((w % 10) + '0');
}
