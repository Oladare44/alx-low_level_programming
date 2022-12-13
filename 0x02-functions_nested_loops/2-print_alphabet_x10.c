#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return - 0 (successful)
 */

void print_alphabet_x10(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
