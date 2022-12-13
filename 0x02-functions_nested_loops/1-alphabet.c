#include "main.h"

/**
 * print_alphabet - Entry Point
 *
 * Return - return 0 (successful)
 */

/* prints alphabets*/

void print_alphabet(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}

