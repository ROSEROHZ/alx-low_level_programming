#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int length = 0;
int q = 0;
char *n = str;
int p;

while (*n != '\0')
{
n++;
length++;
}
q = length - 1;
for (p = 0 ; p <= q ; p++)
{
if (p % 2 == 0)
{
_putchar(str[p]);
}
}
_putchar('\n');
}
