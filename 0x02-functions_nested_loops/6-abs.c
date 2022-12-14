#include "main.h"
#include <stdio.h>

/**
 * _abs(int) - a function that computes the absolute value of an integer
 * ab - integer input
 * Return: always 0
 * main - check the code
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
