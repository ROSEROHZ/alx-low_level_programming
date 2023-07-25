#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 * return: 0
 */
void print_rev(char *s)
{
int length = 0;
int k;

while (*s != '\0')
{
length++;
s++;
}
s--;
for (k = length; k > 0; k--)
{
_putchar(*s);
s--;
}

_putchar('\n');
}
