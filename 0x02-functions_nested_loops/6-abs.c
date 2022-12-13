#include "main.h"
#include <stdio.h>

/**
 * _abs - a function that computes the absolute value of an integer
 * @abs - integer input
 * Return - absolute value of ab
 *
 */

int _abs(int ab)
{
	/* @ab for integer input*/

	return (ab * ((ab > 0) - (ab < 0)));
}
