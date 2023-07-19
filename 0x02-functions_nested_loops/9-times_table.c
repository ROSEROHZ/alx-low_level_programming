#include "main.h"

/**
 * times_table - print the 9 times table from 0
 *
 * Return: None
 */
void times_table(void)
{
	int e, f, g;

	for (e = 0; e <= 9; e++)
	{
		for (f = 0; f <= 9; f++)
		{
			g = e * f;

			if ((g / 10) == 0)
			{
				if (f != 0)
					_putchar(' ');
				_putchar(g + '0');

				if (f == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((g / 10) + '0');
				_putchar((g % 10) + '0');
				if (f == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
