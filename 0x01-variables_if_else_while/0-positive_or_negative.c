#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entery point
 *
 * Descripction : false or true validation
 *
 * Return : number n 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		ptintf("%d is positive\n", n);
	else if (n == 0)
		 ptintf("%d is zero\n", n);
	else
		 ptintf("%d is negative\n", n);
	return (0);
}
