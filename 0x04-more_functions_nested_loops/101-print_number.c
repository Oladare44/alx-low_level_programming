#include "main.h"

/**
 *  print_number - prints @n: Input number
 *  Return: return 0
 *  @n: input
 */


void print_number(int n)
{
	long len, res, i, temp, expo;

	res = n;
	expo = len =  1;
	/*Check negatives*/
	if (res < 0)
	{
		res *= -1;
		_putchar('-');
	}
	/**/
	temp = res;
	while (temp >= 10)
	{
		len++;
		temp /= 10;
	}
	/*create expnent*/
	for (i = 1; i < len; i++)
		expo *= 10;
	/*main*/
	while (expo > 1)
	{
		_putchar((res / expo) % 10 + '0');
		expo /= 10;
	}
	_putchar(res % 10 + '0');
}
