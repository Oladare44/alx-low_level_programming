#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld:  number's last digit result
 * main - check the code
 * Return: Always 0
 */
int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}