#include "main.h"

/**
 * _islower - a function that checks forlower character
 * @c : single letter input
 * Return: 1 if c is lower case, o if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
