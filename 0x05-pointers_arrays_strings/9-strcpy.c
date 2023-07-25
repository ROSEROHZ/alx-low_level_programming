#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int g = 0;
int h = 0;

while (*(src + g) != '\0')
{
g++;
}
for ( ; h < g ; h++)
{
dest[h] = src[h];
}
dest[g] = '\0';
return (dest);
}
