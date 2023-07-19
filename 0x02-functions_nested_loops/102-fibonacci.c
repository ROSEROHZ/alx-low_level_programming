#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, t, r, next;

	t = 1;

	r = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (t != 20365011074)
		{
			printf("%ld, ", t);
		} else
		{
			printf("%ld\n", t);
		}
		next = t + r;
		t = r;
		r = next;
	}

	return (0);
}
