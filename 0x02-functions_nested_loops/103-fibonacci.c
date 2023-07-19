#include <stdio.h>

/**
 * main - finds and prints sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int t, r, next, sum;

	t = 1;
	r = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (t < 4000000 && (t % 2) == 0)
		{
			sum = sum + t;
		}
		next = t + r;
		t = r;
		r = next;
	}

	printf("%lu\n", sum);

	return (0);
}
