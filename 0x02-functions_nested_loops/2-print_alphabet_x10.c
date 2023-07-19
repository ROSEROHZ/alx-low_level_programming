#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: On success 1
 */
void print_alphabet_x10(void)
{
	char r, m;

	for (m = 0; m < 10; m++)
	{
		for (r = 'a'; m <= 'z'; r++)
		{
			_putchar(r);
		}
		_putchar('\n');
	}
}
