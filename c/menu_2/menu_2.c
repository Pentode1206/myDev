// This snippet is from https://stackoverflow.com/questions/42263253/scanf-character-in-c#42273312
// It uses a char variable in scanf() and a while loop to test for valid input
#include <stdio.h>

int main(void)
{

    char tmp;
    printf("Enter \"p\" if you want to sort and shuffle a list of players "
           "or enter \"s\" if you want to sort a list of slots: "); // prompt
    while (scanf(" %c", &tmp) != 1 || (tmp != 'p' && tmp != 's')) {
        printf("Please enter \"p\" or \"s\": ");
    }
    printf("You chose %c\n", tmp);

    printf("Choose \"a\"scending or \"d\"escending sort: ");
    while (scanf(" %c", &tmp) != 1 || (tmp != 'a' && tmp != 'd')) {
        printf("Please enter \"a\" or \"d\": ");
    }
    printf("You chose %c\n", tmp);

    return 0;
}
