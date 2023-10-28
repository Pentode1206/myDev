/* Functions example from p. 17 of The GNU C Progrsmming Tutorial C */
/* Two functions are "prototyped" in lines 9 & 10 */
/* Main function is defined beginning at line 29 */
/* Successfully compiled and executed 27OCT23 */


#include <stdio.h>
#include <stdlib.h> // Required for exit (0) function

/* Function prototypes */

void print_stuff (int foo, int bar);
int calc_value (int bas, int quux);

/* Function definitions*/

void print_stuff (int foo, int bar) // Call calc_value with two integers passed from main() and print result
{
	int var_to_print;
	
	var_to_print = calc_value (foo, bar); // variable var_to_print set to the returned value of calc_value
	printf("var_to_print = %d\n", var_to_print);
}

int calc_value (int bas, int quux) // Return the multiplicand of the two integers passed
{
	return bas * quux;
}

/* Main function */

int main() // Call print_stuff with two integer values, then exit.
{
	print_stuff (23, 5);
	exit (0);
}
