/* This snippet demonstrates a function 'add_nums' that returns a value
 * and a function 'prn_sum' that does not return a value.
 * Based on c-totrial ch. 4.3
 * 05NOV23 */

#include <stdio.h>
#include <stdlib.h>

int num_1 = 15;
int num_2 = 25;
int add_nums (int num_1, int num_2); // function prototype
int prn_sum (int sum_1); // function prototype

int main ()
{
	int sum_1 = add_nums (num_1, num_2);
	prn_sum (sum_1);
	exit (0);
}

int add_nums (int num_1, int num_2)
{
	return num_1 + num_2 ;
}

int prn_sum (int sum_1)
{
	printf("%d + %d = %d\n", num_1, num_2, sum_1);
	return 0;
}
