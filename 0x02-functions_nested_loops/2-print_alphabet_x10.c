#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return - 0 (successful)
 */

void print_alphabet_x10(void)
{
	int p, m;

	m = 0;

	while (m < 10)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		m++;
		_putchar('\n');
	}
}
