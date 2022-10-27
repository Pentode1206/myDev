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