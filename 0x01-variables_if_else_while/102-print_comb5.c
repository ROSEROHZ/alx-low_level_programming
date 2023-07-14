#include <stdio.h>
#include <stdlib.h>
/**
 * main - Starts here
 * Return: Consistently return 0 (Success)
 */
int main(void)
{
	int k, m;

	for (k = 0; k < 100; k++)
	{
		for (m = 0; m < 100; m++)
		{
			if (k < m)
			{
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				putchar(' ');
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				if (k != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
