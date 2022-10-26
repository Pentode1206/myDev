// Example code showing the ternary operator - 25OCT22
#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool a, b, c;
    int i;
    printf("\nEnter a value of 1 or 0 for a: ");
    scanf("%d",&i);
    a = i == 1 ? true : false; // if i == 1 then a = true, else a = false
    printf("\nEnter a value of 1 or 0 for b: ");
    scanf("%d", &i);
    b = i == 1 ? true : false; // if i == 1 then b = true, else b = false
    a && b ? printf("\na && b = 1\n\n") : printf("\na && b = 0\n\n");
}