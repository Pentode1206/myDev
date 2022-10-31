// Simple text menu with four options - 30OCT22
# include<stdio.h>
# include<stdlib.h> // this lib has the "clear" (clear screen) function

int choice;

int main()
{
	do {
	// Print menu and prompt for input
	system("clear"); // Clear the screen
	printf("\n\n\t\t1. First Option");
	printf("\n\n\t\t2. Second Option");
	printf("\n\n\t\t3. Third Option");
	printf("\n\n\t\t4. Fourth Option");
	printf("\n\n\t\tEnter Option number: ");
	scanf("%d",&choice);
	}
	// If 'choice' is not a valid option, repeat do loop
	while (choice < 1 || choice > 4);
	printf("\n\n\t\tYou chose %d!\n\n", choice);
	printf("\n\n");
	return 0;
}
