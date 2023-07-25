#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: insert string
 * Return: half of input
 */
void puts_half(char *str)
{
int m, n, length;

length = 0;

for (m = 0; str[m] != '\0'; m++)
length++;

n = (length / 2);

if ((length % 2) == 1)
n = ((length + 1) / 2);

for (m = n; str[m] != '\0'; m++)
_putchar(str[m]);
_putchar('\n');
}
