/* This is an example program that demonstrates the use of enumerated constants */
/* https://www.educative.io/courses/learn-c-from-scratch/constants */
/* 27OCT23 */

#include <stdio.h>

typedef enum { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC } months_type;

enum days { SUN=1, MON, TUE, WED, THU, FRI, SAT };

months_type current_month = JAN;

enum days current_day = SUN;


int main() 
{
    printf("%d\n",current_month); 
    printf("%d\n",current_day);
    current_month = JUN;
    current_day = MON;
    printf("%d\n",current_month); 
    printf("%d\n",current_day);
    
    // printing the values of months:

    for(months_type month = JAN; month <= DEC; month++){

        printf("%d, ",month);        
    }
    
    printf("\n");
    
    // printing the values of days:
    
    for (enum days day = SUN; day <= SAT; day++){
		
		printf("%d, ",day);	
	}
	
	printf("\n");
	
    return 0;
}
