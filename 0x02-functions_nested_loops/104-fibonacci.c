#include <stdio.h>


/**
 * numLength - returns the lenth of string
 * @num : operand number
 * Return: number of digits
 */

int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}
/**
 * main - prints the first 98 fibonaci sequences
 * Return: 0
 */

int main(void)
{
	unsigned long a1 = 1, a2 = 2, tmp, mx = 100000000, a1o = 0, a2o = 0, tmpo = 0;
	short int y = 1, initial0s;

	while (y <= 98)
	{
		if (a1o > 0)
			printf("%lu", a1o);
		initial0s = numLength(mx) - 1 - numLength(a1);
		while (a1o > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s--;
		}
		printf("%lu", a1);

		tmp = (a1 + a2) % mx;
		tmpo = a1o + a2o + (a1 + a2) / mx;
		a1 = a2;
		a1o = a2o;
		a2 = tmp;
		a2o = tmpo;

		if (y != 98)
			printf(", ");
		else
			printf("\n");
		y++;
	}
	return (0);
}
