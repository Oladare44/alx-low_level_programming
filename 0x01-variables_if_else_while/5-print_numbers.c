#include <stdio.h>
/**
 * main: Entry point
 *
 * return: return 0 -succesful
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);


}
