#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: destination
 * @src: memory where is copied
 * *@n: number of bytes
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int q = 0;
int i = n;

for (; q < i; q++)
{
dest[q] = src[q];
n--;
}
return (dest);
}
