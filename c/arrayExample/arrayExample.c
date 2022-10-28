// Array Example - 27OCT22
// Create an one dimensional int array with 100 elelments, fill the array with integers 0 throuh 99.
// Print the array elements to the terminal in forward and reverse order.

#include<stdio.h>
int main() {
    int tri = 0;
    int val[100];
    for (int j = 0; j < 100; j++) {
        tri += j; // Compute jth triangle number in series.
        val[j] = tri; // Store jth triangle number in val[j].
    }
    for (int j = 0; j < 100; j++) {
        printf("%d ",val[j]); // Print triangle numbers in acending order.
    }
    printf("\n\n");
    for (int j = 99; j > -1; j--) {
        printf("%d ",val[j]); // Print triangle numbers in decending order.
    }
    printf("\n\n");
}
