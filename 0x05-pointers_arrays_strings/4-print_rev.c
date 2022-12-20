#include "main.h"

/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int mtour = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		mtour++;
	}
	for (n = (mtour - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
