// ------------------------------------------- FUNCTIONS --------------------------------------

#include<stdio.h>

void display();         // FUNCTION PROTOTYPE DEFINITION
int main()
{
	int a;
	printf("Initialize display function \n");
	display();        // FUNCTION CALL
	printf("Display function finished its work \n");
	return 0;
}

void display()          // FUNCTION DEFINITION
{
	printf("This is display \n");
}
