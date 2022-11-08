// Simple text menu with four options - 30OCT22
# include<stdio.h>
# include<stdlib.h> // this lib has the "clear" (clear screen) function

int main()
{
	char choice;
	do {
	// Print menu and prompt for input
	system("clear"); // Clear the screen
	printf("\n\n\n\n\n\t\t1. First Option");
	printf("\n\n\t\t2. Second Option");
	printf("\n\n\t\t3. Third Option");
	printf("\n\n\t\t4. Fourth Option");
	printf("\n\n\t\tEnter Option number: ");
	choice = getchar();
	}
	// If 'choice' is not a valid option, repeat do loop
	while (choice < '1' || choice > '4');
	printf("\n\n\t\tYou chose %c!\n\n", choice);
	printf("\n\n");
	return 0;
}
