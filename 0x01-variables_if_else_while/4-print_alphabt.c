#include <stdio.h>
/**
 * main - Starts here
 * Return: Consistently return 0 (Success)
 */

int main(void)
{
	char k;

	k = 'a';
	while
		(k <= 'z') {
			if ((k != 'q' && k != 'e') && k <= 'z')
				putchar(k);
			k++;
		}
	putchar('\n');
	return (0);
}
