#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main: main block
 * description: print the last digit of the number stored in variable
 *Return : return 0 -successful
 */
int main(void)
{
	int n;

	int last;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("last digit of %i is %i and is 0\n", n, last);
	else if (last < 6 && last != 0)
		printf("last digits of %i and is less than 6 and not 0\n", n, last);
	return (0);
}
