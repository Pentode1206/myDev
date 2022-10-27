// Array Example - 27OCT22
// Create an one dimensional int array with 100 elelments., fill the array with integers 0 throuh 99, print the array elements to the terminal
#include<stdio.h>
int main() {
    int val[100];
    for (int j = 0; j < 100; j++) {
        val[j] = j;
    }
    for (int j = 0; j < 100; j++) {
        printf("%d ",val[j]);
    }
    printf("\n\n");
}
