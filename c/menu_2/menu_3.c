// This snippet is from https://stackoverflow.com/questions/42263253/scanf-character-in-c#42273312
// It uses a char variable in scanf() and a while loop nested in a do while loop to test for valid input
// It improves on menu_2.c by using the nested while loop to empty unmatched input characters from the input stream.
#include <stdio.h>

int main(void)
{

char tmp;
int c;
int scanf_ret;

do {
    printf("Enter \"p\" if you want to sort and shuffle a list of players "
           "or enter \"s\" if you want to sort a list of slots: "); // prompt
    scanf_ret = scanf("%c", &tmp);
    while ((c = getchar()) != '\n' && c != EOF) {
        continue;                   // discard extra characters
    }
} while (scanf_ret != 1 || (tmp != 'p' && tmp != 's'));

    return 0;
}
